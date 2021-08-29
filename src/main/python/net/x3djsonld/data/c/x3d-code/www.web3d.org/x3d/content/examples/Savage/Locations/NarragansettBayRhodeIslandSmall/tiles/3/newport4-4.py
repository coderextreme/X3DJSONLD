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
    GeoLOD(center=(41.5833639510952,-71.28958815570479,0.0),range=4300.153,child1Url=['../../tiles/4/newport8-8.x3d'],child2Url=['../../tiles/4/newport8-9.x3d'],child3Url=['../../tiles/4/newport9-8.x3d'],child4Url=['../../tiles/4/newport9-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[0,0,0,0,0,11,16,12,12,17,24,32,38,41,51,53,33,32,32,32,32,40,44,45,0,0,0,0,0,0,2,6,12,14,21,25,38,43,46,51,38,31,34,32,32,32,40,40,0,0,0,0,0,0,0,7,7,14,20,26,37,45,42,42,38,28,26,32,32,32,37,37,0,0,0,0,0,0,0,1,7,11,18,29,37,35,41,36,26,36,27,31,32,32,32,32,0,0,0,0,0,0,0,0,3,9,17,28,29,30,30,20,33,35,37,35,37,47,43,43,0,0,0,0,0,0,0,0,0,6,9,19,22,22,5,27,35,42,51,47,48,47,55,54,0,0,0,0,0,0,0,0,0,0,0,0,11,4,20,29,39,48,50,51,57,62,58,59,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,22,38,50,63,56,53,60,60,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,15,37,49,59,65,50,56,62,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,29,51,54,55,60,51,59,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,22,41,48,64,55,55,54,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,17,38,52,57,56,53,51,51,0,0,0,0,3,6,0,0,0,0,0,0,0,0,0,1,15,32,48,51,55,52,47,46,0,0,0,0,2,4,0,0,0,0,0,0,0,0,0,0,6,21,42,49,49,49,44,42,0,0,0,0,6,5,0,0,0,0,0,0,0,0,0,3,4,20,42,48,48,50,49,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,8,21,39,56,57,54,49,49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,15,24,36,52,63,57,47,45,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,4,12,26,33,40,46,45,39,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,6,11,21,24,30,30,36,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,16,13,28,29,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,1,2,8,15,22,25,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,12,18,23,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,13,17,25,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,12,16,26,30],
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
