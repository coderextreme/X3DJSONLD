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
    GeoLOD(center=(41.6560016710928,-71.41065102236746,0.0),range=2150.0764,child1Url=['../../tiles/5/newport26-2.x3d'],child2Url=['../../tiles/5/newport26-3.x3d'],child3Url=['../../tiles/5/newport27-2.x3d'],child4Url=['../../tiles/5/newport27-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.41872188014497,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[9,9,9,8,3,2,3,4,6,7,7,8,7,5,0,0,0,0,0,0,0,0,0,0,10,8,6,8,7,4,5,6,9,9,6,6,7,6,2,0,0,0,0,0,0,0,0,0,14,11,10,8,7,6,7,9,11,12,11,9,9,11,8,0,0,0,0,0,0,0,0,0,14,14,13,12,11,13,12,10,12,13,14,15,12,11,10,0,0,0,0,0,0,0,0,0,16,15,16,14,14,14,13,14,15,16,16,16,15,12,12,1,0,0,0,0,0,0,0,0,18,16,16,18,16,15,14,16,15,18,18,15,13,11,9,0,0,0,0,0,0,0,0,0,18,18,16,17,19,17,16,17,17,18,18,14,12,10,10,9,0,0,0,0,0,0,0,0,17,17,19,20,19,18,18,16,16,16,15,14,11,8,5,5,0,0,0,0,0,0,0,0,15,16,20,20,19,18,18,13,11,13,13,11,7,4,2,0,0,0,0,0,0,0,0,0,16,16,16,16,17,16,15,15,13,10,9,6,4,3,2,0,0,0,0,0,0,0,0,0,13,15,12,17,17,17,17,14,12,6,3,1,0,0,0,1,0,0,0,0,0,0,0,0,11,14,15,14,15,14,13,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,13,13,12,12,11,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,9,8,9,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,8,4,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,3,3,3,3,1,1,0,1,1,2,4,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,3,3,4,3,4,3,3,3,5,3,0,0,0,0,0,0,0,0,0,0,6,6,4,3,5,5,5,6,6,6,6,4,4,1,0,0,0,0,0,0,0,0,0,0,7,8,8,7,6,6,5,7,7,8,7,4,2,0,0,0,0,0,0,0,0,0,0,0,8,8,9,8,7,6,7,7,8,9,7,3,0,0,0,0,0,0,0,0,0,0,0,0,8,9,9,7,6,6,8,8,8,8,7,3,0,0,0,0,0,0,0,0,0,0,0,0],
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
