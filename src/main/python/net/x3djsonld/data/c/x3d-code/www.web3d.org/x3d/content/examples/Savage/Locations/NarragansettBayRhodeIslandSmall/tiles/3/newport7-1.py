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
    GeoLOD(center=(41.680214244425336,-71.38643844903493,0.0),range=4300.153,child1Url=['../../tiles/4/newport14-2.x3d'],child2Url=['../../tiles/4/newport14-3.x3d'],child3Url=['../../tiles/4/newport15-2.x3d'],child4Url=['../../tiles/4/newport15-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=24,zSpacing=0.0014036275,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,12,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,21,19,15,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,20,25,26,22,14,6,3,0,0,0,0,0,0,0,0,0,0,0,1,10,19,24,27,27,23,18,14,0,1,1,0,0,0,0,0,0,0,0,7,11,16,21,26,29,27,23,18,14,4,2,1,0,0,0,0,0,0,0,0,12,16,19,26,30,31,28,24,21,15,6,3,1,0,0,0,0,0,0,0,0,11,17,25,26,30,33,31,26,22,16,8,4,2,0,0,0,0,0,0,0,0,11,19,22,26,31,34,32,25,24,19,8,4,2,0,0,0,0,0,0,0,0,12,20,23,23,25,32,34,31,25,22,9,3,2,0,0,0,0,0,0,0,1,12,18,20,22,24,32,37,38,28,16,3,3,1,0,0,0,0,0,0,0,0,9,15,16,20,27,33,38,37,35,19,9,3,1,0,0,0,0,0,0,0,0,0,4,12,23,27,38,44,41,35,25,16,3,1,0,0,2,5,3,2,0,0,0,4,10,18,24,37,45,45,37,35,26,5,1,0,2,6,5,4,4,0,0,0,3,12,18,24,39,45,44,37,35,24,10,1,0,5,8,6,8,3,0,0,1,5,13,18,24,36,45,42,33,27,19,8,3,3,6,8,8,7,2,0,0,2,9,16,18,25,41,44,38,28,21,14,11,9,5,8,8,8,5,1,0,0,3,7,13,16,23,38,41,34,26,21,19,16,12,6,8,8,8,5,1,0,0,2,7,13,15,23,38,41,33,26,22,19,18,12],
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
