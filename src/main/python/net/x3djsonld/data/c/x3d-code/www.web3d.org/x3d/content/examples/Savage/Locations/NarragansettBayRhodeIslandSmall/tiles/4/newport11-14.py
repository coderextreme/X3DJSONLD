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
    GeoLOD(center=(41.62371823998276,-71.20080872015217,0.0),range=2150.0764,child1Url=['../../tiles/5/newport22-28.x3d'],child2Url=['../../tiles/5/newport22-29.x3d'],child3Url=['../../tiles/5/newport23-28.x3d'],child4Url=['../../tiles/5/newport23-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[13,18,21,21,17,12,9,6,3,0,0,0,0,0,0,0,0,0,0,0,0,2,4,5,13,18,20,18,14,10,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,5,12,17,18,15,10,6,3,0,0,0,0,0,0,0,0,0,0,1,5,1,1,1,4,5,12,16,15,11,8,3,1,0,0,0,0,0,0,0,0,0,1,4,5,4,3,4,7,7,11,15,12,8,4,1,0,0,0,0,0,0,0,0,0,0,1,3,6,7,7,11,16,18,11,13,11,6,3,0,0,0,0,0,0,0,0,0,0,0,3,6,10,14,15,26,28,26,10,11,9,6,2,0,0,0,0,0,0,0,0,0,0,6,15,24,27,26,24,26,28,29,8,9,7,5,2,0,0,0,0,0,0,0,0,0,7,18,30,34,38,38,34,30,30,30,5,6,5,2,0,0,0,0,0,0,0,1,5,12,15,25,30,34,41,46,44,36,34,34,0,0,0,0,0,2,4,3,7,5,2,3,15,24,19,21,27,37,41,45,50,46,41,40,0,0,1,5,7,8,11,12,13,10,5,3,6,10,17,22,32,42,46,49,51,53,51,50,0,2,6,8,12,15,13,19,15,13,11,8,5,13,14,15,26,36,43,50,52,52,55,55,1,8,10,11,13,16,16,18,19,14,12,14,10,9,11,13,18,23,34,42,50,50,54,54,4,10,13,14,15,16,18,19,20,16,13,12,11,10,12,15,19,22,26,30,36,39,43,45,6,12,15,16,17,19,20,22,23,22,20,16,14,10,11,13,16,20,23,24,27,31,38,41,9,15,18,19,19,21,23,29,30,34,32,24,17,12,11,12,16,20,21,22,24,28,33,34,11,17,20,21,23,27,31,37,32,38,36,26,19,14,13,16,21,26,25,24,22,23,26,26,11,17,21,23,24,32,42,41,34,36,35,29,23,17,14,19,23,28,31,28,23,22,23,23,11,17,21,24,28,36,44,40,39,37,33,28,24,18,16,21,28,32,35,32,26,23,23,23,11,18,22,26,30,35,37,40,44,38,35,28,21,17,21,25,30,33,36,34,30,27,26,25,10,17,22,26,30,35,39,48,44,37,32,28,26,20,20,28,31,30,32,34,33,31,32,30,9,16,22,25,30,38,45,51,45,36,30,30,29,23,21,26,30,30,31,33,33,33,34,32,8,15,22,26,32,39,47,52,44,35,31,31,29,24,23,28,30,31,33,33,32,32,33,32,8,15,22,26,32,39,47,52,44,35,31,31,29,24,24,28,30,31,34,32,32,31,32,31],
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
