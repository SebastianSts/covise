macroScript NoParents category:"Hierarchie" 
(
        for x in $ do
		(
			    if x.category == #standard do
				(
					if x.children.count == 0 do
					(
						x.parent = none
					)
					if x.children.count == 1 do
					(
						x.children[1].parent = x.parent
						x.parent = none
					)
				    if matchPattern x.name pattern: "Group*" then
				    (
				    ) 
					else
					(
					if x.children.count > 1 do
					(
						g = group(x.children)
						g.parent =x.parent
						x.parent = none

					)
						print x
					)
				)
		)
) 