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
    GeoLOD(center=(41.672143386647825,-71.23309215126221,0.0),range=2150.0764,child1Url=['../../tiles/5/newport28-24.x3d'],child2Url=['../../tiles/5/newport28-25.x3d'],child3Url=['../../tiles/5/newport29-24.x3d'],child4Url=['../../tiles/5/newport29-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,4,6,7,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,7,10,11,7,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,5,9,12,15,17,11,4,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,7,11,16,20,21,13,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,10,17,23,25,24,14,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,15,25,31,32,27,18,7,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,12,23,33,37,38,31,19,10,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,19,31,39,43,45,37,22,12,7,4,1,1,1,1,1,1,1,1,1,1,1,1,1,24,36,47,50,52,38,24,15,10,7,1,1,1,1,1,1,1,1,1,1,1,1,1,29,45,51,55,60,41,27,18,12,8,2,1,1,1,1,1,1,1,1,1,1,1,1,31,44,50,56,62,42,30,19,15,10,2,1,1,1,1,1,1,1,1,1,1,1,1,30,39,45,50,51,42,36,21,16,10,3,1,1,1,1,1,1,1,1,1,1,1,1,29,34,39,41,40,36,29,21,15,11,3,1,1,1,1,1,1,1,1,1,1,1,1,28,33,38,40,39,35,29,21,15,10,3,1,1,1,1,1,1,1,1,1,1,1,1],
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
