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
    GeoLOD(center=(41.62371823998276,-71.31380072903733,0.0),range=2150.0764,child1Url=['../../tiles/5/newport22-14.x3d'],child2Url=['../../tiles/5/newport22-15.x3d'],child3Url=['../../tiles/5/newport23-14.x3d'],child4Url=['../../tiles/5/newport23-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[32,33,33,34,34,34,36,35,34,37,39,41,45,49,48,48,50,42,37,38,37,34,29,28,35,31,31,32,34,35,32,32,37,36,37,42,47,45,46,47,46,41,37,35,34,33,29,28,32,33,34,32,33,32,34,34,34,38,35,38,43,43,44,44,44,38,36,37,36,34,30,29,32,33,35,34,32,34,32,35,34,35,35,39,39,42,43,42,40,36,35,33,36,34,30,29,33,32,32,33,33,29,32,34,34,35,35,33,38,42,44,41,37,39,38,31,34,36,31,30,32,35,34,33,34,33,33,31,32,36,39,34,36,41,39,38,33,33,34,34,33,37,33,30,31,33,32,35,33,33,31,32,31,31,36,34,34,37,40,37,32,30,32,33,35,31,30,28,28,32,33,32,33,33,32,32,31,31,31,35,36,33,32,34,33,32,33,33,31,28,24,22,30,32,33,33,35,34,34,30,30,31,31,29,32,29,28,29,33,28,29,30,29,23,21,19,28,32,33,34,34,33,31,31,30,31,30,28,26,24,23,25,30,25,28,29,26,22,18,17,24,28,31,32,34,36,36,32,31,28,24,23,21,17,18,21,22,24,27,26,24,21,19,18,19,24,26,30,31,32,31,32,29,25,25,21,18,15,17,17,22,24,26,27,23,18,13,11,12,17,22,24,28,30,31,32,28,24,22,20,17,12,17,17,18,20,25,25,22,14,9,9,9,11,16,19,21,26,28,29,26,23,22,19,17,15,15,15,15,19,21,19,16,13,11,10,5,9,10,11,16,19,23,26,26,23,22,21,16,17,13,14,16,17,16,15,11,10,8,6,5,5,6,10,11,14,17,23,26,22,20,18,16,17,15,12,12,14,13,12,11,9,3,1,1,1,3,4,9,9,12,14,19,22,22,19,15,12,12,14,13,12,10,10,8,6,0,0,1,2,1,0,2,4,6,8,15,23,25,22,13,11,9,9,10,9,9,7,7,3,0,0,0,1,2,4,3,4,8,10,14,15,12,13,14,11,7,8,9,8,6,6,4,1,0,0,1,1,1,3,4,4,7,14,15,11,10,10,8,9,7,6,6,5,4,3,1,0,0,0,3,1,2,4,4,5,8,11,10,9,9,8,8,6,7,5,3,2,2,1,1,0,0,0,3,1,3,1,8,14,8,6,7,9,8,7,7,3,1,1,1,1,1,1,1,0,0,0,4,4,1,3,7,11,10,4,5,8,8,7,1,0,0,1,1,1,1,1,1,0,0,0,4,5,2,3,7,10,8,4,7,8,8,6,0,0,0,1,1,1,1,1,1,0,0,0],
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
