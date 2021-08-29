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
    meta(content='ExclusionZoneExample.x3d',name='title'),
    meta(content='ExclusionZoneExample shows example use of the ExclusionZone prototype.',name='description'),
    meta(content='Alan Hudson',name='creator'),
    meta(content='11 September 2006',name='created'),
    meta(content='5 May 2007',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Tools/Symbology/ExclusionZoneExample.x3d',name='identifier'),
    meta(content='TextPad',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='ExclusionZones',url=["ExclusionZonePrototype.wrl#ExclusionZones","https://savage.nps.edu/Savage/Tools/Symbology/ExclusionZonePrototype.wrl#ExclusionZones","ExclusionZonePrototype.x3d#ExclusionZones","https://savage.nps.edu/Savage/Tools/Symbology/ExclusionZonePrototype.x3d#ExclusionZones"],
      field=[
      field(accessType='inputOutput',appinfo='Usually to raise ranges off the surface',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Length in Meters for the radius of the range',name='OutterRange',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Length in Meters for the radius of the range',name='MiddleRange',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Length in Meters for the radius of the range',name='InnerRange',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Turns zones on and off',name='whichChoice',type='SFInt32')]),
    ProtoInstance(name='ExclusionZones',
      fieldValue=[
      fieldValue(name='OutterRange',value=(9,9,9)),
      fieldValue(name='MiddleRange',value=(4,4,4)),
      fieldValue(name='InnerRange',value=(2,2,2)),
      fieldValue(name='whichChoice',value=0)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExclusionZoneExample.py")
