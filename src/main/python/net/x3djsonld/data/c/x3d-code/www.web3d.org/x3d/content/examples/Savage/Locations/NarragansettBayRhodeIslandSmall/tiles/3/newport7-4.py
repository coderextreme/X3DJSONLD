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
    GeoLOD(center=(41.680214244425336,-71.28958815570479,0.0),range=4300.153,child1Url=['../../tiles/4/newport14-8.x3d'],child2Url=['../../tiles/4/newport14-9.x3d'],child3Url=['../../tiles/4/newport15-8.x3d'],child4Url=['../../tiles/4/newport15-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[0,9,14,24,22,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,17,23,22,11,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,16,24,16,11,8,0,4,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,16,18,17,17,15,1,5,11,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,16,17,16,13,10,17,10,13,13,0,0,0,0,0,0,0,0,0,0,0,4,8,0,11,17,17,12,10,13,12,17,14,12,7,0,0,0,0,0,0,0,0,0,5,12,14,0,9,17,15,17,13,8,8,11,16,14,7,0,0,0,0,0,0,0,0,6,8,13,15,0,10,18,15,12,10,6,12,13,18,14,11,0,0,0,0,0,0,0,0,2,13,17,18,0,12,17,18,15,10,9,11,16,22,16,13,2,0,0,0,0,0,0,3,10,17,20,21,3,13,20,16,18,16,13,13,18,18,19,12,7,0,0,0,0,0,0,16,15,18,20,20,7,15,14,14,14,17,9,12,13,14,9,14,6,0,0,0,0,0,2,7,14,19,20,21,0,11,15,12,15,10,1,1,9,12,9,8,6,0,0,0,0,0,0,6,13,14,16,18,0,5,6,9,7,3,1,1,1,2,6,7,0,0,0,0,0,0,0,1,7,5,9,11,0,0,5,3,8,1,1,1,1,3,4,4,0,0,0,0,0,0,0,1,2,4,2,3,0,0,2,7,8,1,1,1,1,1,3,0,0,0,0,0,0,0,0,4,1,0,2,2,0,0,14,11,10,1,1,1,2,8,10,7,1,0,0,0,0,6,3,9,7,4,1,1,0,0,1,7,1,4,5,5,10,9,10,7,6,1,0,0,5,5,10,11,9,4,2,2,0,0,0,0,0,0,4,4,6,7,9,10,12,9,1,1,8,5,16,13,9,4,2,2,0,0,0,0,0,0,0,1,3,5,6,8,9,5,6,6,4,15,19,15,8,5,6,5,0,0,0,0,0,0,0,0,2,4,6,6,8,8,6,9,13,20,19,14,10,8,10,10,0,0,0,0,0,0,0,0,0,5,6,9,6,7,11,17,24,24,21,18,14,12,12,13,0,0,0,0,0,0,0,0,0,2,4,9,9,13,19,21,27,24,24,17,17,16,15,14,0,0,0,0,0,0,0,0,0,0,8,9,15,20,22,25,30,31,25,19,17,19,18,20,0,0,0,0,0,0,0,0,0,0,7,10,15,20,23,25,30,30,25,18,17,20,19,21],
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
