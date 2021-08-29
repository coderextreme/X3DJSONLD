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
    GeoLOD(center=(41.607576524427735,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport20-22.x3d'],child2Url=['../../tiles/5/newport20-23.x3d'],child3Url=['../../tiles/5/newport21-22.x3d'],child4Url=['../../tiles/5/newport21-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[52,49,50,44,43,50,53,45,46,45,47,45,44,43,42,39,36,30,23,17,12,8,3,2,47,50,46,42,41,42,44,41,41,42,42,41,40,40,39,37,34,29,23,17,11,7,3,2,45,43,36,37,39,41,40,37,36,38,39,41,40,37,38,36,34,29,23,15,9,6,4,3,36,36,34,35,36,35,33,33,32,34,35,36,35,35,36,34,31,28,22,15,10,6,3,2,30,31,33,33,34,38,36,31,31,30,30,33,33,36,34,32,29,26,22,17,12,8,5,4,27,28,32,29,30,30,28,28,31,29,30,30,32,32,33,33,31,28,23,18,13,9,6,5,29,27,30,30,29,28,29,32,30,30,32,30,32,35,36,36,35,32,25,18,14,11,8,7,26,31,32,32,30,29,32,34,34,34,32,34,35,39,38,39,38,35,27,22,16,12,7,6,29,33,37,39,35,37,39,38,38,38,36,40,39,42,41,41,39,34,27,22,18,13,10,8,29,30,35,44,41,38,42,42,44,44,45,43,44,44,44,43,38,32,26,22,18,17,12,10,33,33,37,47,49,41,43,45,47,47,48,47,47,45,44,41,37,32,27,23,21,19,13,11,34,38,45,46,52,45,45,47,49,47,49,50,50,47,44,40,36,32,28,24,22,19,14,12,37,40,44,48,58,51,51,51,48,52,50,51,49,42,41,39,36,31,28,25,24,21,16,15,37,44,46,50,57,55,51,52,52,50,50,49,48,45,41,39,35,31,28,26,24,21,17,16,37,47,46,51,57,60,51,50,50,48,47,46,45,45,42,39,35,32,28,27,25,23,18,17,39,45,48,52,50,58,49,49,51,48,46,46,44,44,43,40,36,32,30,29,27,25,19,18,48,47,45,43,44,53,48,45,49,47,45,45,43,44,42,40,37,33,31,30,29,27,21,19,47,46,45,42,40,48,51,45,44,48,44,45,45,44,43,42,38,35,32,32,32,28,23,22,50,46,44,42,39,43,51,44,46,45,46,42,42,45,44,43,40,36,34,33,32,29,24,22,52,50,48,43,38,41,49,41,43,44,44,43,44,46,45,44,41,38,35,32,32,28,22,20,51,50,45,46,41,37,46,44,41,43,46,46,46,46,46,44,41,38,34,32,30,27,21,20,48,46,44,44,43,41,43,47,41,44,45,46,47,47,45,43,40,38,35,31,27,23,19,18,43,41,43,44,43,42,42,50,44,44,46,46,52,51,48,44,40,36,33,30,26,22,19,17,43,41,43,43,43,41,43,51,45,45,46,46,52,52,49,45,40,36,33,30,26,22,18,17],
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
