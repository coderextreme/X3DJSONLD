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
    GeoLOD(center=(41.52686794665262,-71.39450930681244,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-4.x3d'],child2Url=['../../tiles/5/newport10-5.x3d'],child3Url=['../../tiles/5/newport11-4.x3d'],child4Url=['../../tiles/5/newport11-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,13,18,26,27,24,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,10,17,19,21,23,24,27,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,17,17,14,18,20,22,23,31,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,22,17,20,22,27,25,31,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,19,17,20,24,27,27,33,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,17,15,19,24,29,28,31,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,15,16,18,22,27,29,34,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,11,17,17,19,21,24,29,32,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,11,16,18,19,21,25,28,30,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,16,17,20,20,23,26,28,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,14,17,20,22,23,24,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,14,16,19,22,24,23,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,16,19,21,23,23,26,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,13,14,20,23,24,26,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,11,14,19,20,23,23,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,14,18,19,21,24,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,12,15,18,21,27,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,11,15,18,22,25,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,13,18,21,24,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,13,17,19,24,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,12,16,20,21,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,11,15,19,20,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,14,17,20,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,13,17,19,20],
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
