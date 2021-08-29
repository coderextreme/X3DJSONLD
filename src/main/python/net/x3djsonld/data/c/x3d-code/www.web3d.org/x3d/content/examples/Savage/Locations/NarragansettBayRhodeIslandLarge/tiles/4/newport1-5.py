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
    GeoLOD(center=(41.18606897540399,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport2-10.x3d'],child2Url=['../../tiles/5/newport2-11.x3d'],child3Url=['../../tiles/5/newport3-10.x3d'],child4Url=['../../tiles/5/newport3-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport1-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.161878899235994,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[19,31,36,32,34,35,37,36,30,30,19,20,20,0,0,0,0,0,0,0,0,0,22,27,26,32,28,30,32,26,24,22,12,8,8,0,0,0,0,0,0,0,0,0,23,16,11,16,25,28,24,22,17,22,10,7,1,0,0,0,0,0,0,0,0,0,18,14,11,15,12,24,27,26,24,7,0,0,0,0,0,0,0,0,0,0,0,0,15,12,20,14,11,18,24,19,12,0,0,0,0,0,0,0,0,0,0,0,0,0,14,21,12,13,14,8,9,12,9,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,11,9,7,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,0,0,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,12,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,15,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,15,19,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,10,15,18,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,15,13,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,12,12,16,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,9,15,6,11,11,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,14,13,9,11,9,13,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,15,14,9,11,9,14,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
