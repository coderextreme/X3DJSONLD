###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='NavigationAidsExample.x3d',name='title'),
    meta(content='Navigation Aids Example, using two of each Prototype: Range Light, Lighted Buoy, Light.',name='description'),
    meta(content='Planet 9 Studios, Inc., San Francisco, CA',name='creator'),
    meta(content='Christian Greuel, Director of Art and Production',name='producer'),
    meta(content='http://www.planet9.com',name='reference'),
    meta(content='IHO S-57: http://www.caris.com/s-57',name='reference'),
    meta(content='Xj3D Format Converter',name='translator'),
    meta(content='17 August 2006',name='created'),
    meta(content='18 August 2006',name='translated'),
    meta(content='14 January 2014',name='modified'),
    meta(content='../../license.html',name='license'),
    meta(content='https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/NavigationAidsExample.x3d',name='identifier')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='RangeLight',url=["RangeLightPrototype.x3d#RangeLight","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/RangeLightPrototype.x3d#RangeLight","RangeLightPrototype.wrl#RangeLight","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/RangeLightPrototype.wrl#RangeLight"],
      #  NOTE: Beacon light points due North (+Z) and is only visible from that side. 
      field=[
      field(accessType='inputOutput',name='LightType',type='SFInt32'),
      #  0=LightOff, 1=LightOn, 2=LightFlashing(NotImplemented) 
      field(accessType='inputOutput',name='LightGlow',type='SFVec3f')]
      #  XYZ Scale of Light Glow Effect (suggest Z=1.0) 
      ),
    ExternProtoDeclare(name='LightedBuoy',url=["LightedBuoyPrototype.x3d#LightedBuoy","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightedBuoyPrototype.x3d#LightedBuoy","LightedBuoyPrototype.wrl#LightedBuoy","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightedBuoyPrototype.wrl#LightedBuoy"],
      #  NOTE: CATLAM = Catagory of Lateral Marker (Reference: IHO S-57) 
      field=[
      field(accessType='inputOutput',name='Catlam',type='SFInt32'),
      #  0=None(Unlikely), 1=Green(Port), 2=Red(Starboard) 
      field(accessType='inputOutput',name='LightType',type='SFInt32'),
      #  0=LightOff, 1=LightOn, 2=LightFlashing(NotImplemented) 
      field(accessType='inputOutput',name='LightGlow',type='SFVec3f'),
      #  XYZ Scale of Light Glow Effect (suggest Z=1.0) 
      field(accessType='inputOutput',name='Number',type='SFInt32')]
      #  Not Implemented 
      ),
    ExternProtoDeclare(name='Light',url=["LightPrototype.x3d#Light","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightPrototype.x3d#Light","LightPrototype.wrl#Light","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightPrototype.wrl#Light"],
      #  NOTE: CATLAM = Catagory of Lateral Marker (Reference: IHO S-57) 
      field=[
      field(accessType='inputOutput',name='Catlam',type='SFInt32'),
      #  0=None(Unlikely), 1=Green(Port), 2=Red(Starboard) 
      field(accessType='inputOutput',name='LightType',type='SFInt32'),
      #  0=LightOff, 1=LightOn, 2=LightFlashing(NotImplemented) 
      field(accessType='inputOutput',name='LightGlow',type='SFVec3f'),
      #  XYZ Scale of Light Glow Effect (suggest Z=1.0) 
      field(accessType='inputOutput',name='PileType',type='SFInt32'),
      #  0=NoPile(Unlikely), 1=SinglePile, 2=MultiPile 
      field(accessType='inputOutput',name='Number',type='SFInt32')]
      #  Not Implemented 
      ),
    NavigationInfo(avatarSize=[5.0,1.6,0.75]),
    Viewpoint(description='On Range Line',fieldOfView=0.6024,orientation=(1.0,0.0,0.0,0.0),position=(0.0,5.0,50.0)),
    Viewpoint(description='Left of Range Line',fieldOfView=0.6024,orientation=(1.0,0.0,0.0,0.0),position=(-7.0,5.0,50.0)),
    Viewpoint(description='Right of Range Line',fieldOfView=0.6024,orientation=(1.0,0.0,0.0,0.0),position=(7.0,5.0,50.0)),
    Viewpoint(description="Bird's Eye",fieldOfView=0.6024,orientation=(0.668,0.7377,0.09804,-0.3928),position=(-30.0,30.0,100.0)),
    Transform(DEF='RangeLightFront',rotation=(0.0,-1.0,0.0,-3.14159),translation=(0.0,0.0,-25.0),
      #  Rotate to face South 
      children=[
      ProtoInstance(name='RangeLight',
        fieldValue=[
        fieldValue(name='LightType',value=1),
        #  LightOn 
        fieldValue(name='LightGlow',value=(4.0,4.0,1.0))]
        #  Glow effect scaled four times wide (XY only) 
        )]),
    Transform(DEF='RangeLightRear',rotation=(0.0,-1.0,0.0,-3.14159),translation=(0.0,5.0,-50.0),
      #  Rotate to face South 
      children=[
      ProtoInstance(name='RangeLight',
        fieldValue=[
        fieldValue(name='LightType',value=1),
        #  LightOn 
        fieldValue(name='LightGlow',value=(4.0,4.0,1.0))]
        #  Glow effect scaled four times wide (XY only) 
        )]),
    Transform(DEF='LightedBuoyPort',translation=(-10.0,0.0,0.0),
      children=[
      ProtoInstance(name='LightedBuoy',
        fieldValue=[
        fieldValue(name='Catlam',value=1),
        #  Green (Port) 
        fieldValue(name='LightType',value=1),
        #  LightOn 
        fieldValue(name='LightGlow',value=(1.0,1.0,1.0)),
        #  Glow effect scaled four times wide (XY only) 
        fieldValue(name='Number',value=0)])]),
    Transform(DEF='LightedBuoyStarboard',translation=(10.0,0.0,0.0),
      children=[
      ProtoInstance(name='LightedBuoy',
        fieldValue=[
        fieldValue(name='Catlam',value=2),
        #  Red (Starboard) 
        fieldValue(name='LightType',value=1),
        #  LightOn 
        fieldValue(name='LightGlow',value=(1.0,1.0,1.0)),
        #  Glow effect scaled four times wide (XY only) 
        fieldValue(name='Number',value=0)])]),
    Transform(DEF='LightPort',translation=(-10.0,0.0,25.0),
      children=[
      ProtoInstance(name='Light',
        fieldValue=[
        fieldValue(name='Catlam',value=1),
        #  Green (Port) 
        fieldValue(name='LightType',value=1),
        #  LightOn 
        fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
        #  Glow effect scaled four times wide (XY only) 
        fieldValue(name='PileType',value=1),
        #  Single Pile 
        fieldValue(name='Number',value=0)])]),
    Transform(DEF='LightStarboard',translation=(10.0,0.0,25.0),
      children=[
      ProtoInstance(name='Light',
        fieldValue=[
        fieldValue(name='Catlam',value=2),
        #  Red (Starboard) 
        fieldValue(name='LightType',value=1),
        #  LightOn 
        fieldValue(name='LightGlow',value=(2.0,2.0,2.0)),
        #  Glow effect scaled four times wide (XY only) 
        fieldValue(name='PileType',value=2),
        #  Multi Pile 
        fieldValue(name='Number',value=0)])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NavigationAidsExample.py")
