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
    GeoLOD(center=(41.839201031939915,-71.21960164167137,0.0),range=12301.135,child1Url=['../../tiles/4/newport14-12.x3d'],child2Url=['../../tiles/4/newport14-13.x3d'],child3Url=['../../tiles/4/newport15-12.x3d'],child4Url=['../../tiles/4/newport15-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[11,18,20,12,14,11,15,23,18,25,34,20,9,17,25,25,27,25,21,18,27,28,8,12,13,7,7,8,14,25,20,28,33,19,15,17,17,20,25,27,29,37,28,35,6,8,10,7,11,14,11,23,22,23,27,18,17,17,21,22,22,22,30,28,31,28,4,5,5,5,15,14,14,19,23,22,20,17,17,23,23,27,23,22,28,27,42,35,5,5,5,5,16,17,10,25,25,24,21,18,17,27,27,34,25,22,22,24,24,25,8,8,6,6,14,18,10,22,28,28,25,22,23,26,31,36,32,25,23,26,25,25,13,12,14,6,16,22,14,22,30,31,24,26,26,25,34,37,32,28,26,31,25,28,10,14,6,8,22,27,23,24,27,30,22,22,22,22,33,37,31,28,25,25,28,30,7,9,8,9,27,30,16,21,25,22,22,22,22,22,39,35,30,30,25,25,25,25,6,13,6,10,21,21,20,19,24,24,26,24,22,22,30,33,36,39,31,25,25,26,12,11,16,12,20,19,26,20,21,30,36,27,24,22,28,33,39,46,40,29,25,26,15,11,13,12,21,22,22,24,20,25,34,28,26,29,29,34,44,42,36,29,25,25,15,16,14,14,16,20,20,22,24,29,29,29,33,29,39,40,45,46,41,33,27,27,16,11,17,14,16,18,23,27,26,26,30,29,29,31,49,48,43,43,41,31,25,25,12,12,20,18,18,19,20,19,19,22,26,25,30,32,52,49,45,47,43,35,30,30,12,15,10,13,13,15,17,17,22,28,32,33,31,32,50,50,48,46,44,41,42,40,10,15,16,10,11,17,14,19,19,31,31,33,31,32,39,47,54,39,39,40,34,32,11,14,10,14,17,16,16,19,19,33,31,33,37,32,32,45,43,34,32,31,31,31,16,20,11,17,20,22,20,17,25,33,35,31,31,31,37,42,43,42,37,41,40,36,29,23,14,23,27,25,28,20,20,30,32,31,31,31,31,37,41,40,37,43,48,43,32,27,25,24,27,35,37,28,22,29,35,31,31,37,37,38,43,37,35,37,37,36,32,27,25,24,28,36,37,28,22,29,35,31,31,37,38,38,43,37,35,37,36,36],
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
