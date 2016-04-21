package chartboost;

import haxe.macro.Context;
import haxe.macro.Expr;

class Macro
{
	public static function build()
	{
		var pos = Context.currentPos();
		
		var fields:Array<Field> = [];
		for(f in Context.getBuildFields())
		{
			switch f.kind
			{
				case FFun(func):
					// native
					var args = func.args.map(function(a) return a.name != 'error' ? a : {
						name: a.name,
						type: macro:String,
						opt: a.opt,
						value: a.value,
					});
					fields.push({
						pos: pos,
						name: '_' + f.name,
						meta: [{
							pos: pos,
							name: ':native',
						}],
						kind: FFun({
							args: args,
							ret: func.ret,
							expr: null,
						})
					});
					
					// override
					fields.push({
						pos: pos,
						name: f.name,
						meta: [{
							pos: pos,
							name: ':overload',
						}],
						kind: FFun({
							args: func.args,
							ret: func.ret,
							expr: macro return $i{'_' + f.name}($a{func.args.map(function(a) return a.name == 'error' ? macro error.getName() : macro $i{a.name})}),
						}),
						access: [APublic, AOverride],
					});
				default:
			}
		}
		
		return fields;
	}
}