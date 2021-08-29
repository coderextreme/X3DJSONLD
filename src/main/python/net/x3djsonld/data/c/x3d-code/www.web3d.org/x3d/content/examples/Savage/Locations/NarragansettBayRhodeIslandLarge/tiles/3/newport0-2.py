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
    GeoLOD(center=(41.161878899235994,-71.57136730636591,0.0),range=12301.135,child1Url=['../../tiles/4/newport0-4.x3d'],child2Url=['../../tiles/4/newport0-5.x3d'],child3Url=['../../tiles/4/newport1-4.x3d'],child4Url=['../../tiles/4/newport1-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.1134987469,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,21,28,29,18,17,18,28,29,29,23,1,0,0,0,0,0,0,0,0,0,14,18,27,46,31,27,21,26,33,42,26,43,38,35,27,0,0,0,0,0,0,0,17,20,23,38,40,41,40,30,28,21,35,34,38,30,20,21,0,0,0,0,0,0,0,24,24,37,41,40,42,41,35,23,10,26,25,17,12,3,0,0,0,0,0,0,0,10,40,40,58,54,27,34,33,17,19,11,25,14,0,0,0,0,0,0,0,0,0,22,28,39,55,52,39,27,19,8,10,7,5,0,0,0,0,0,0,0,0,0,0,0,12,31,27,40,35,29,21,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,15,20,15,0,0,0,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,14,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,13,8,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,13,8,12,0,0,0,0,0,0,0,0],
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
