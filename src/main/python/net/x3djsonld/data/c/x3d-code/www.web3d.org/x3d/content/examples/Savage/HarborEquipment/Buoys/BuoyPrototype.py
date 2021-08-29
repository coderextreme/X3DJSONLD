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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    meta(content='BuoyPrototype.x3d',name='title'),
    meta(content='Buoy prototype, allows selection of Red, Green, and Mooring',name='description'),
    meta(content='Patrick Sullivan',name='creator'),
    meta(content='27 July 2006',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='Buoys, Mooring Buoy',name='subject'),
    meta(content='https://savage.nps.edu/Savage/HarborEquipment/Buoys/BuoyPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Buoy sequence',orientation=(1,0,0,-0.3218),position=(0,5,15)),
    Inline(DEF='GridXZ_20x20Fixed',url=["GridXZ_20x20Fixed.x3d","../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","GridXZ_20x20Fixed.wrl","../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl"]),
    ProtoDeclare(appinfo='One of several selectable buoys (red green marking mooring MooringBuoy-HighDetail)',name='Buoy',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='[0-2] (0=Red 1=Green 2=Mooring)',name='BuoyType',type='SFInt32',value=-1)]),
      ProtoBody=ProtoBody(
        children=[
        Transform(scale=(3,3,3),
          children=[
          Switch(DEF='BuoySelections',whichChoice=-1,
            IS=IS(
              connect=[
              connect(nodeField='whichChoice',protoField='BuoyType')]),
            children=[
            Inline(DEF='RedBuoy',url=["../../../Savage/HarborEquipment/Buoys/RedBuoy.x3d","https://savage.nps.edu/Savage/HarborEquipment/Buoys/RedBuoy.x3d"]),
            Inline(DEF='GreenBuoy',url=["../../../Savage/HarborEquipment/Buoys/GreenBuoy.x3d","https://savage.nps.edu/Savage/HarborEquipment/Buoys/GreenBuoy.x3d"]),
            Inline(DEF='MarkerBuoy.x3d',url=["../../../Savage/HarborEquipment/Buoys/MarkerBuoy.x3d","https://savage.nps.edu/Savage/HarborEquipment/Buoys/MarkerBuoy.x3d"]),
            Inline(DEF='MooringBuoy',url=["../../../Savage/HarborEquipment/Buoys/MooringBuoy.x3d","https://savage.nps.edu/Savage/HarborEquipment/Buoys/MooringBuoy.x3d"]),
            Inline(DEF='MooringBuoy-HighDetail',url=["../../../Savage/HarborEquipment/Buoys/MooringBuoyHighDetail.x3d","https://savage.nps.edu/Savage/HarborEquipment/Buoys/MooringBuoyHighDetail.x3d"])])])])),
    ProtoInstance(DEF='BuoyPrototype',name='Buoy',
      fieldValue=[
      fieldValue(name='BuoyType',value=0)]),
    TimeSensor(DEF='Clock',cycleInterval=9,loop=True),
    IntegerSequencer(DEF='Counter',key=[0,0.2,0.4,0.6,0.8,1],keyValue=[0,1,2,3,4,0]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='Counter'),
    ROUTE(fromField='value_changed',fromNode='Counter',toField='BuoyType',toNode='BuoyPrototype')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BuoyPrototype.py")
