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
    GeoLOD(center=(41.486513657765066,-71.28958815570479,0.0),range=4300.153,child1Url=['../../tiles/4/newport2-8.x3d'],child2Url=['../../tiles/4/newport2-9.x3d'],child3Url=['../../tiles/4/newport3-8.x3d'],child4Url=['../../tiles/4/newport3-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport1-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[15,15,10,10,13,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,17,12,12,15,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,14,12,13,17,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,15,12,14,14,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,18,15,18,17,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,21,17,21,21,18,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,20,18,20,22,18,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,20,18,19,23,23,18,10,0,0,0,0,0,0,0,0,0,0,0,0,0,7,13,8,6,19,16,20,22,22,17,6,0,0,0,0,0,0,0,0,0,0,0,0,0,10,19,16,15,18,18,21,23,21,15,0,0,0,0,0,0,0,0,0,0,0,0,0,6,13,21,21,19,24,23,25,23,18,10,3,0,0,0,0,0,0,0,0,0,0,0,6,8,16,20,22,22,26,26,27,23,16,8,0,0,0,0,0,0,0,0,0,0,0,2,9,9,17,25,27,26,28,28,28,22,16,3,0,0,0,0,0,0,0,0,0,0,3,7,11,14,20,28,32,32,24,21,23,18,11,0,0,0,0,0,0,0,0,0,1,3,8,12,15,21,26,32,38,40,18,16,17,12,6,0,0,0,0,0,0,0,0,0,0,3,10,15,19,22,28,35,39,39,15,12,10,6,3,0,0,0,0,0,0,0,0,0,0,5,10,14,22,23,32,37,40,41,16,14,11,8,6,5,3,7,5,2,0,0,0,0,2,9,13,18,25,27,32,39,41,41,19,20,15,11,11,10,9,12,11,9,1,1,0,0,11,18,18,21,23,30,36,42,44,44,21,19,16,17,17,15,16,21,19,11,3,2,1,7,14,21,26,27,31,34,37,40,42,42,25,26,24,22,20,23,21,27,24,14,5,2,2,9,16,25,31,36,42,43,39,44,42,40,25,26,25,23,21,25,21,26,24,15,5,2,2,9,16,25,32,37,42,43,40,44,42,41],
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
