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
    meta(content='ZoneExample.x3d',name='title'),
    meta(content='Simple example using Zone prototype',name='description'),
    meta(content='Alan Hudson',name='creator'),
    meta(content='11 September 2006',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Tools/Symbology/ZoneExample.x3d',name='identifier'),
    meta(content='TextPad',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='Zone',url=["ZonePrototype.x3d#Zone","https://savage.nps.edu/Savage/Tools/Symbology/ZonePrototype.x3d#Zone","ZonePrototype.wrl#Zone","https://savage.nps.edu/Savage/Tools/Symbology/ZonePrototype.wrl#Zone"],
      field=[
      field(accessType='inputOutput',appinfo='Usually to raise ranges off the surface',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Scale of 1 meter radius circle',name='range',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='The color to display the zone in.',name='color',type='SFColor'),
      field(accessType='inputOutput',appinfo='Turns zones on and off',name='whichChoice',type='SFInt32')]),
    ProtoInstance(name='Zone',
      fieldValue=[
      fieldValue(name='translation',value=(0,1,0)),
      fieldValue(name='range',value=(1,1,1)),
      fieldValue(name='color',value=(1,0,0))]),
    ProtoInstance(name='Zone',
      fieldValue=[
      fieldValue(name='translation',value=(0,1,0)),
      fieldValue(name='range',value=(3,3,3)),
      fieldValue(name='color',value=(0,1,0))]),
    ProtoInstance(name='Zone',
      fieldValue=[
      fieldValue(name='translation',value=(0,1,0)),
      fieldValue(name='range',value=(7,7,7)),
      fieldValue(name='color',value=(0,0,1))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ZoneExample.py")
