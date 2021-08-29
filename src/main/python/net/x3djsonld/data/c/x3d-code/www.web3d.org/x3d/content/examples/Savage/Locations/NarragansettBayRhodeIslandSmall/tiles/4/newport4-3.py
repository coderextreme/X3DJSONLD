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
    GeoLOD(center=(41.5107262310976,-71.37836759125742,0.0),range=2150.0764,child1Url=['../../tiles/5/newport8-6.x3d'],child2Url=['../../tiles/5/newport8-7.x3d'],child3Url=['../../tiles/5/newport9-6.x3d'],child4Url=['../../tiles/5/newport9-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport4-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[0,0,0,0,0,0,8,12,17,20,21,23,20,20,20,19,17,17,20,21,22,21,20,20,0,0,0,0,0,0,3,10,15,18,17,18,19,18,15,15,17,15,15,17,17,19,20,20,0,0,0,0,0,0,0,3,8,12,14,16,14,14,14,13,12,12,12,16,16,18,20,20,0,0,0,0,0,0,0,0,0,4,6,10,11,12,9,10,8,9,11,10,13,12,17,18,0,0,0,0,0,0,0,0,0,0,1,4,5,8,9,7,5,5,8,9,12,11,14,14,0,0,0,0,0,0,0,0,0,0,0,0,2,3,4,4,3,6,6,7,8,8,8,10,0,0,0,0,0,0,0,0,0,0,0,0,0,4,2,2,2,5,5,4,4,4,6,8,0,0,0,0,0,0,0,0,0,0,2,5,5,4,2,3,2,3,4,4,4,5,3,3,0,0,0,0,0,0,0,0,1,7,10,10,4,3,2,4,6,4,3,3,3,3,3,2,0,0,0,0,0,0,0,2,5,8,11,9,9,11,8,5,4,3,3,3,3,3,3,3,0,0,0,0,0,0,3,5,9,11,9,11,12,10,12,8,6,4,4,3,3,3,3,3,0,0,0,0,0,2,5,8,9,10,12,12,11,11,13,11,10,4,4,4,3,3,3,2,0,0,0,0,2,3,5,9,12,13,13,15,16,11,10,8,9,9,5,4,3,3,2,2,0,0,1,3,5,5,5,8,13,13,15,14,16,12,12,10,9,7,4,4,5,3,2,2,0,0,4,6,8,9,8,6,8,12,11,14,16,14,12,13,11,11,9,7,3,4,3,2,5,9,8,6,8,11,11,10,6,9,11,12,15,17,15,17,15,13,11,10,11,9,4,3,10,10,8,9,11,11,12,13,12,7,12,13,14,19,19,20,21,19,16,12,12,8,6,6,11,12,14,15,13,12,13,15,15,13,11,13,13,18,21,24,26,24,20,17,15,11,9,8,16,17,20,20,15,16,18,13,15,14,15,17,14,17,20,26,28,25,23,21,18,16,13,11,20,23,22,23,21,18,15,14,15,18,18,14,19,21,25,27,26,27,25,24,22,20,16,15,23,24,27,26,27,24,23,19,20,20,17,19,17,16,20,23,26,28,30,29,22,22,18,17,24,27,27,32,38,31,24,20,19,18,17,18,18,19,21,20,23,29,30,31,25,23,17,16,24,27,29,33,38,31,24,21,19,18,17,17,19,20,21,20,22,28,31,31,26,24,17,16],
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
