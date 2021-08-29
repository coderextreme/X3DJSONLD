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
    GeoLOD(center=(41.49458451554258,-71.2976590134823,0.0),range=2150.0764,child1Url=['../../tiles/5/newport6-16.x3d'],child2Url=['../../tiles/5/newport6-17.x3d'],child3Url=['../../tiles/5/newport7-16.x3d'],child4Url=['../../tiles/5/newport7-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport3-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[23,21,21,20,21,22,23,24,23,20,17,12,8,1,0,0,0,0,0,0,0,0,0,24,24,24,23,23,25,24,23,22,18,17,10,5,3,0,0,0,0,0,0,0,0,0,25,25,24,24,26,27,25,22,19,17,14,9,4,2,0,0,0,0,0,0,0,0,0,26,25,25,26,28,27,25,22,19,16,12,8,4,0,0,0,0,0,0,0,0,0,0,26,28,27,27,27,27,26,24,21,17,12,7,1,0,0,0,0,0,0,0,0,0,0,27,28,28,28,28,28,26,23,21,17,10,4,0,0,0,0,0,0,0,0,0,0,0,27,27,27,27,27,27,25,22,19,15,9,2,0,0,0,0,0,0,0,0,0,0,0,25,25,24,23,24,24,22,20,16,13,8,1,0,0,0,0,0,0,0,0,0,0,0,22,23,22,21,22,22,20,17,14,10,6,0,0,0,0,0,0,0,0,0,0,0,0,20,20,18,18,19,19,18,15,12,8,4,0,0,0,0,0,0,0,0,0,0,0,0,18,18,16,16,17,17,14,12,9,6,2,0,0,0,0,0,0,0,0,0,0,0,0,18,17,15,13,14,13,11,8,6,4,2,0,0,0,0,0,0,0,0,0,0,0,0,18,16,14,12,11,11,9,6,4,3,1,0,0,0,0,0,0,0,0,0,0,0,0,18,16,13,12,11,10,8,6,4,3,3,3,2,1,2,2,2,2,3,0,0,0,0,18,16,15,13,12,10,9,7,6,5,5,4,3,3,3,5,5,4,4,2,0,0,0,18,17,17,16,14,12,10,8,7,7,7,6,4,4,5,8,7,6,5,3,1,1,1,18,18,18,18,16,14,12,10,9,9,8,8,7,7,7,10,10,9,8,6,1,1,1,21,20,20,20,18,15,12,12,12,12,11,11,10,9,10,13,13,12,11,9,4,1,1,21,20,20,20,18,15,13,14,14,14,13,13,13,13,15,17,16,15,13,10,5,2,2,22,21,20,19,18,16,16,17,18,17,16,15,15,16,19,21,20,19,14,11,7,3,2,24,23,22,20,19,19,19,20,21,20,18,17,16,17,21,23,24,21,16,12,8,5,2,28,25,23,25,24,23,22,22,21,20,22,22,20,19,23,26,25,24,21,14,9,4,1,28,26,25,27,26,25,24,25,25,25,28,28,23,23,23,26,28,25,21,18,11,5,2,28,26,26,27,26,25,24,26,25,26,29,29,25,24,23,27,27,25,22,18,11,5,2],
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
