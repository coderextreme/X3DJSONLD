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
    GeoLOD(center=(41.664072528870314,-71.27344644014977,0.0),range=8600.306,child1Url=['../../tiles/3/newport6-4.x3d'],child2Url=['../../tiles/3/newport6-5.x3d'],child3Url=['../../tiles/3/newport7-4.x3d'],child4Url=['../../tiles/3/newport7-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=0.0029348573,zDimension=22,zSpacing=0.0030746125,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,25,22,10,2,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,10,17,8,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,2,2,2,0,0,0,0,0,0,0,2,1,5,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,8,6,0,0,0,0,17,13,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,2,1,0,0,0,23,40,30,0,0,0,1,1,1,1,0,0,8,0,0,0,0,0,0,0,0,0,5,31,37,27,3,0,0,1,1,1,1,0,5,13,0,0,0,0,0,0,0,0,0,4,16,25,21,8,0,0,1,1,1,1,0,16,19,0,0,0,0,0,0,0,0,0,0,13,21,15,9,1,0,1,1,1,1,0,16,19,0,0,0,0,0,0,0,0,0,0,5,14,17,10,1,0,1,1,1,1,0,19,13,2,10,0,0,0,0,0,0,8,3,2,10,16,13,6,0,1,1,1,1,0,18,13,14,13,6,0,0,0,0,5,15,8,6,18,28,20,6,1,1,1,1,1,3,17,11,8,16,10,0,0,0,0,12,15,12,6,15,28,26,17,10,4,1,9,10,8,17,16,10,17,12,0,0,0,11,19,23,23,19,18,29,39,24,17,11,5,34,35,3,13,17,1,10,8,0,0,0,10,17,19,25,31,26,37,47,30,26,17,13,48,50,0,5,1,1,1,4,0,0,0,1,2,8,25,32,39,45,47,42,29,17,18,31,31,0,13,2,2,8,8,0,0,5,10,2,8,30,48,54,51,51,40,26,17,15,22,23,0,0,0,5,6,10,2,5,16,10,1,5,26,34,43,47,48,41,28,17,13,16,16,0,0,0,0,3,9,8,12,22,15,9,15,22,26,39,41,50,45,27,20,13,5,4,0,0,0,0,0,11,16,25,27,18,16,21,21,22,34,48,49,41,29,19,10,1,1,0,0,0,0,0,15,31,33,28,22,21,31,22,27,32,38,37,23,20,19,2,1,1,0,0,0,0,0,16,32,33,29,22,22,31,23,27,33,38,36,21,20,19,2,1,1],
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
