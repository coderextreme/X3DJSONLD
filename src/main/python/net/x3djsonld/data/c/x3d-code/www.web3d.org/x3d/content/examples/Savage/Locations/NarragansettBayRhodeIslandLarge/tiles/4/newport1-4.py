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
    GeoLOD(center=(41.18606897540399,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport2-8.x3d'],child2Url=['../../tiles/5/newport2-9.x3d'],child3Url=['../../tiles/5/newport3-8.x3d'],child4Url=['../../tiles/5/newport3-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport1-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.161878899235994,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,14,17,21,19,20,26,34,35,41,41,40,39,41,41,32,26,25,33,21,19,0,0,0,8,17,26,24,24,30,31,46,50,39,38,45,47,29,33,36,28,19,22,0,0,0,11,21,25,22,37,36,42,41,45,42,36,40,45,41,38,34,31,23,23,0,0,0,14,11,17,34,44,44,40,54,56,50,45,33,31,38,36,35,32,21,18,0,0,0,18,11,21,38,35,42,53,59,60,56,33,27,31,33,35,32,26,18,15,0,0,0,4,17,22,33,27,32,53,59,63,54,27,32,36,31,20,16,16,18,14,0,0,0,0,20,26,25,33,42,43,54,58,56,31,38,31,29,21,19,15,8,7,0,0,0,0,0,8,11,24,28,25,31,46,47,33,32,33,28,29,4,1,19,23,0,0,0,0,0,0,9,23,30,27,25,36,38,35,35,26,29,17,20,9,0,0,0,0,0,0,0,0,2,5,18,7,23,26,29,24,19,20,13,9,0,0,0,11,0,0,0,0,0,0,0,0,15,7,12,16,19,18,16,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,11,5,9,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,11,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,10,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,10,12],
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
