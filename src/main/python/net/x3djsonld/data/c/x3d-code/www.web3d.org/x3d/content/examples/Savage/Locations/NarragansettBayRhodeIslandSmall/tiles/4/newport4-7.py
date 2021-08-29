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
    GeoLOD(center=(41.5107262310976,-71.31380072903733,0.0),range=2150.0764,child1Url=['../../tiles/5/newport8-14.x3d'],child2Url=['../../tiles/5/newport8-15.x3d'],child3Url=['../../tiles/5/newport9-14.x3d'],child4Url=['../../tiles/5/newport9-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport4-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[0,0,5,9,6,6,8,9,9,7,6,3,4,3,6,8,10,13,17,19,23,26,28,28,0,0,4,3,7,8,8,9,11,11,7,3,3,3,4,6,8,12,13,17,22,25,27,27,0,0,1,3,7,8,9,9,8,7,9,5,2,4,3,5,7,11,13,17,20,25,27,27,0,3,4,4,6,7,7,6,5,6,7,4,6,7,8,3,6,9,12,16,19,23,26,26,0,2,3,5,8,8,8,7,6,5,5,3,4,5,3,4,9,15,17,19,21,22,24,25,2,6,6,6,8,9,6,6,6,4,4,3,2,5,6,6,13,14,17,22,25,25,24,25,4,9,10,10,5,6,7,7,7,5,7,3,0,6,9,9,12,16,20,24,28,27,28,27,6,9,9,9,7,5,6,3,5,4,8,3,1,3,9,23,25,18,23,24,26,25,26,27,4,11,11,8,9,8,5,3,4,4,5,6,5,9,13,18,22,22,27,28,29,25,27,27,1,9,10,8,9,7,7,6,5,4,3,9,6,8,16,17,20,24,29,31,33,30,28,28,0,6,7,6,6,5,4,4,4,6,6,14,15,14,14,18,23,29,35,33,30,30,30,29,0,3,6,5,3,5,5,6,5,5,8,11,14,14,18,21,27,34,38,37,31,30,31,31,0,0,2,3,4,4,5,5,6,10,7,10,12,16,20,26,31,43,48,39,31,32,31,31,0,0,0,0,1,5,5,10,6,5,10,12,19,20,26,32,36,42,46,37,34,33,34,34,0,0,0,0,2,5,6,4,3,8,12,16,21,26,30,35,38,41,38,39,38,37,36,36,0,1,3,2,3,1,6,2,2,12,12,19,25,31,34,38,43,44,40,37,38,39,37,37,0,0,1,5,10,3,2,6,7,15,16,20,26,31,35,39,40,34,35,38,39,41,41,41,0,0,3,4,6,8,3,8,9,11,16,23,29,33,36,37,36,34,33,36,37,37,39,39,0,3,6,8,7,10,7,11,14,12,18,24,31,32,34,34,32,32,29,32,34,35,36,36,0,7,12,12,10,12,10,7,16,17,16,22,28,29,29,29,29,27,26,29,29,31,33,33,5,11,11,11,11,12,14,13,13,16,19,19,23,26,28,25,24,23,21,24,22,24,28,28,10,13,16,16,15,16,11,14,14,12,16,17,20,21,20,22,21,18,18,20,18,21,22,22,12,14,17,16,14,17,14,12,14,12,14,16,19,21,19,22,19,18,17,19,17,20,21,21],
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
