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
    GeoLOD(center=(41.62371823998276,-71.32994244459235,0.0),range=2150.0764,child1Url=['../../tiles/5/newport22-12.x3d'],child2Url=['../../tiles/5/newport22-13.x3d'],child3Url=['../../tiles/5/newport23-12.x3d'],child4Url=['../../tiles/5/newport23-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,11,19,19,28,32,32,31,32,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,15,21,24,30,31,34,35,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,16,20,21,27,30,31,32,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,17,18,22,28,33,33,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,15,17,21,23,29,33,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,13,16,22,25,31,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,11,16,21,28,31,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,16,23,26,28,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,18,24,24,28,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,16,20,24,27,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,13,19,22,24,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,17,21,19,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,11,15,14,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,9,8,8,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,5,4,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,2,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,4,4,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,3,4,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,1,0,2,2,1,2,3,5,5,5,4,4,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,2,2,3,3,5,5,5,4,4],
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
