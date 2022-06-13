'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="HAnimModelsHandsFeet.x3d"),
Viewpoint(description="Hands and feet 10m"),
Viewpoint(description="Hands and feet 1.7m", position=((0,0,1.7))),
Transform(translation=((-1,1,0)), children=[
Inline(url=["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl"]),
#Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model

Transform(DEF="GridXY_20x20Fixed_AdjustScale", scale=((0.1,0.1,0.1)), children=[
Inline(DEF="GridXY_20x20Fixed", url=["GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"])]),]),
Transform(translation=((1,1,0)), children=[
Inline(url=["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl"]),
Transform(USE="GridXY_20x20Fixed_AdjustScale")]),
Transform(translation=((-1,-1,0)), children=[
#rotation='0 0 1 3.141593'

Inline(url=["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl"]),
Transform(USE="GridXY_20x20Fixed_AdjustScale"),]),
Transform(translation=((1,-1,0)), children=[
#rotation='0 0 1 3.141593'

Inline(url=["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl"]),
Transform(USE="GridXY_20x20Fixed_AdjustScale"),])]))
.XML())
