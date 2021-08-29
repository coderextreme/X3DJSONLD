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
    GeoLOD(center=(41.86339110810791,-71.24158699571478,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-24.x3d'],child2Url=['../../tiles/5/newport30-25.x3d'],child3Url=['../../tiles/5/newport31-24.x3d'],child4Url=['../../tiles/5/newport31-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[12,10,8,11,11,11,11,14,19,21,19,22,24,22,20,21,20,20,24,25,34,34,12,14,10,11,16,11,11,14,21,22,20,22,23,20,21,24,20,20,22,28,36,36,10,12,11,15,14,12,13,14,20,23,21,19,19,19,23,22,20,22,24,32,32,31,14,14,11,16,15,14,13,16,18,17,22,20,19,20,23,21,24,23,23,32,29,29,18,11,11,18,23,15,14,13,16,18,23,20,21,22,27,22,22,24,28,30,29,29,20,19,13,18,20,20,17,15,15,18,19,20,23,26,25,24,25,25,28,29,29,29,12,16,11,14,17,14,13,16,15,16,17,17,21,30,26,19,19,20,25,24,28,29,7,7,16,23,19,29,17,15,16,18,17,17,20,20,20,19,19,20,21,22,27,27,9,11,7,16,16,10,13,18,17,16,22,19,20,24,21,20,19,22,24,24,25,26,11,12,11,11,11,11,11,14,16,16,16,21,21,21,19,17,21,22,23,29,29,29,12,13,18,14,13,16,12,11,15,14,14,16,16,16,16,18,22,23,25,30,34,33,10,13,18,18,19,17,11,10,9,13,17,15,14,14,17,21,23,21,28,32,32,32,9,9,8,8,8,11,13,13,13,15,16,17,15,14,17,20,22,19,23,31,31,31,10,12,11,11,11,15,14,14,16,16,15,18,17,15,17,22,22,21,29,33,31,31,11,12,16,13,10,12,11,17,16,16,16,17,18,16,19,21,22,25,33,33,34,34,22,15,22,21,11,11,15,17,17,17,20,19,19,17,16,17,22,27,33,34,34,35,23,18,19,20,18,14,20,19,19,22,25,25,22,21,19,18,20,27,31,33,33,33,29,25,23,23,19,17,21,23,26,28,25,21,26,25,22,20,19,20,27,32,33,32,36,32,23,19,16,21,23,24,24,30,28,27,33,30,25,23,22,20,23,33,35,34,32,32,29,23,25,22,24,25,26,27,31,31,37,37,30,29,23,24,26,33,34,34,32,32,29,24,26,26,24,26,31,37,44,35,37,36,31,32,25,22,29,31,37,39,32,32,30,24,26,26,25,27,30,38,46,36,37,36,31,33,26,22,28,31,37,39],
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
