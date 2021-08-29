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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='DIS'),
    component(level=1,name='Geospatial'),
    meta(content='MontereyBayOpArea.x3d',name='title'),
    meta(content='Operations area top-level scene for Monterey Bay California, used by the AUV Workbench to build scenarios using unmanned vehicles.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='15 February 2007',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/MontereyBayOpArea.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Note that the geoCoords must match the AUV Workbench c_geo.xml file in /configuration/template 
    children=[
    GeoLocation(geoCoords=(36.607,-121.885,0.0),
      geoOrigin=GeoOrigin(DEF='DEPRECATED',geoCoords=(36.607,-121.885,0.0)),
      #  <DirectionalLight ambientIntensity='0.1' direction='-3 -3 0'/> 
      children=[
      Viewpoint(DEF='OverheadViewpoint',description='Monterey Bay Operations Area',fieldOfView=1.0,orientation=(-1.0,0.0,0.0,1.57),position=(0.0,5000.0,2000.0)),
      NavigationInfo(DEF='SlowNI',speed=100.0),
      NavigationInfo(DEF='FastNI',speed=1000.0,type=["FLY","ANY"]),
      ROUTE(fromField='isBound',fromNode='OverheadViewpoint',toField='set_bind',toNode='FastNI'),
      ExternProtoDeclare(name='GridXZ',url=["../../../Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","../../../Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ"],
        field=[
        field(accessType='initializeOnly',name='description',type='SFString'),
        field(accessType='inputOutput',name='labelColor',type='SFColor'),
        field(accessType='inputOutput',name='scale',type='SFVec3f'),
        field(accessType='inputOutput',name='originLabel',type='MFString'),
        field(accessType='inputOutput',name='WestLabel',type='MFString'),
        field(accessType='inputOutput',name='NorthWestLabel',type='MFString'),
        field(accessType='inputOutput',name='NorthLabel',type='MFString'),
        field(accessType='inputOutput',name='NorthEastLabel',type='MFString'),
        field(accessType='inputOutput',name='EastLabel',type='MFString'),
        field(accessType='inputOutput',name='SouthEastLabel',type='MFString'),
        field(accessType='inputOutput',name='SouthLabel',type='MFString'),
        field(accessType='inputOutput',name='SouthWestLabel',type='MFString')]),
      #  shift GridXZ down slightly so that mission tracks appear above it, providing better visibility 
      Transform(translation=(0,-0.1,0),
        children=[
        ProtoInstance(name='GridXZ',
          fieldValue=[
          fieldValue(name='description',value='GridXZ for AUV in Open Ocean'),
          fieldValue(name='labelColor',value=(1.0,1.0,1.0)),
          fieldValue(name='scale',value=(50.0,50.0,50.0)),
          fieldValue(name='originLabel',value=["origin","0 0 0"]),
          fieldValue(name='WestLabel',value=["West","-Y"]),
          fieldValue(name='NorthWestLabel',value=["500 0 -500"]),
          fieldValue(name='NorthLabel',value=["North","+X"]),
          fieldValue(name='NorthEastLabel',value=["500 0 500"]),
          fieldValue(name='EastLabel',value=["East","+Y"]),
          fieldValue(name='SouthEastLabel',value=["-500 0 500"]),
          fieldValue(name='SouthLabel',value=["South","-X"]),
          fieldValue(name='SouthWestLabel',value=["-500 0 -500"])])]),
      #  the following scene is not geospatially referenced 
      Inline(url=["../../../Savage/Locations/MontereyBayCalifornia/MontereyBayArea.x3d","https://savage.nps.edu/Savage/Locations/MontereyBayCalifornia/MontereyBayArea.x3d","../../../Savage/Locations/MontereyBayCalifornia/MontereyBayArea.wrl","https://savage.nps.edu/Savage/Locations/MontereyBayCalifornia/MontereyBayArea.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MontereyBayOpArea.py")
