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
    GeoLOD(center=(41.680214244425336,-71.41872188014497,0.0),range=4300.153,child1Url=['../../tiles/4/newport14-0.x3d'],child2Url=['../../tiles/4/newport14-1.x3d'],child3Url=['../../tiles/4/newport15-0.x3d'],child4Url=['../../tiles/4/newport15-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[18,17,14,12,13,15,14,16,14,14,10,8,8,6,5,7,7,2,0,0,0,0,0,0,16,15,15,13,11,12,16,18,17,13,9,8,9,7,9,7,7,0,0,0,0,0,0,0,16,14,13,12,13,15,15,15,13,12,14,12,9,10,7,9,8,6,0,0,0,0,0,0,20,16,13,16,18,16,15,13,15,12,13,11,10,9,8,6,5,2,2,0,0,0,0,0,21,21,18,20,19,19,16,15,15,4,10,8,6,4,1,0,0,0,0,0,0,0,0,0,7,10,19,21,21,17,14,12,14,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,14,17,11,15,15,10,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,14,13,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,6,5,5,4,3,4,4,0,0,0,0,0,0,0,3,2,1,0,0,1,4,5,11,9,9,9,8,6,2,0,0,0,0,0,0,1,6,9,6,5,7,6,7,8,7,8,7,7,8,9,0,0,0,3,2,0,0,0,0,3,8,12,9,8,10,9,8,8,8,6,8,7,3,1,2,2,4,6,4,3,0,1,3,3,8,12,14,15,14,13,12,11,12,10,4,7,6,6,7,7,9,7,8,4,0,4,5,4,8,12,15,15,14,13,13,12,12,11,6,8,7,6,7,7,9,8,8,4,0,4,6],
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
