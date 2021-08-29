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
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoLOD(center=(41.669870498763935,-71.2855577038016,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-22.x3d'],child2Url=['../../tiles/5/newport22-23.x3d'],child3Url=['../../tiles/5/newport23-22.x3d'],child4Url=['../../tiles/5/newport23-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,8,0,0,0,0,0,4,8,0,0,0,0,0,0,0,0,0,0,0,1,0,3,4,0,0,0,0,0,23,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,30,32,0,0,0,0,13,5,0,0,0,0,0,0,0,0,0,0,0,0,0,12,26,27,0,0,0,11,15,8,0,0,0,0,0,0,0,0,0,0,0,0,1,2,18,18,0,0,1,16,19,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,16,0,0,7,18,23,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,8,0,0,9,19,24,11,0,1,0,0,0,0,0,0,0,0,0,0,0,3,1,4,0,0,3,18,15,14,9,9,7,0,0,0,0,0,0,0,0,10,10,2,4,4,0,0,11,17,15,11,13,13,13,0,0,0,0,0,0,0,13,15,13,7,5,5,0,0,8,17,15,10,5,12,17,9,0,0,0,0,0,6,12,20,13,6,8,8,0,0,11,18,15,10,12,20,17,7,0,0,0,0,2,11,20,18,17,18,9,13,0,0,14,15,17,11,15,17,13,10,0,0,0,0,7,16,23,25,22,24,23,22,0,0,7,14,13,5,1,7,8,8,0,0,0,0,9,10,13,18,26,26,30,30,0,0,0,4,10,1,1,0,4,3,0,0,0,0,0,5,3,9,16,26,32,32,0,0,0,5,10,1,1,0,4,2,0,0,0,0,0,5,1,6,16,27,32,34],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
