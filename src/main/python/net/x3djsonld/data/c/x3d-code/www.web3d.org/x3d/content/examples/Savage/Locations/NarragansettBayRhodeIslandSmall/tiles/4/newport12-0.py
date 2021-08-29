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
    GeoLOD(center=(41.63985995553778,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport24-0.x3d'],child2Url=['../../tiles/5/newport24-1.x3d'],child3Url=['../../tiles/5/newport25-0.x3d'],child4Url=['../../tiles/5/newport25-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[22,21,19,15,13,13,11,10,9,9,9,9,10,13,11,10,11,12,14,12,10,8,10,23,19,17,15,14,12,11,10,9,7,8,8,10,12,12,12,12,14,12,13,13,12,10,29,24,16,14,16,14,10,8,8,7,7,10,12,11,12,15,14,14,12,13,12,9,10,32,28,21,17,16,13,9,8,7,9,9,11,12,12,13,16,15,14,12,12,12,13,15,29,27,22,17,14,11,11,9,9,10,11,11,11,14,17,16,16,15,13,11,11,14,14,28,26,25,21,15,12,12,11,11,13,12,12,12,13,14,13,15,17,16,14,13,11,12,29,26,25,22,16,13,13,13,13,14,16,15,13,14,14,13,14,17,17,14,12,10,12,24,24,23,20,17,16,13,13,13,15,15,13,14,14,12,13,16,15,14,13,13,12,13,22,21,21,19,17,15,15,14,16,17,17,15,13,13,13,15,14,13,13,12,15,16,13,21,19,18,19,18,17,16,13,14,15,14,14,15,14,15,14,13,13,13,13,13,13,14,22,20,18,19,19,18,17,16,15,13,14,14,13,14,15,14,13,12,14,16,16,16,14,25,22,20,20,19,20,20,18,15,13,12,14,14,14,12,11,13,14,16,17,17,16,13,28,27,23,23,21,20,19,18,16,13,12,13,13,14,14,14,14,16,17,18,16,15,14,32,28,25,23,20,18,17,17,16,15,14,15,14,13,13,15,16,16,13,16,15,14,13,31,30,28,24,20,19,16,14,15,15,15,15,17,15,13,15,16,15,15,18,16,14,15,34,31,29,24,20,17,14,14,15,15,16,16,16,16,14,15,16,20,21,15,14,14,11,33,32,29,24,20,17,15,13,14,15,16,17,16,17,16,17,19,22,21,15,13,12,11,32,31,29,25,22,18,16,14,13,14,15,16,16,17,20,19,16,16,17,17,16,12,12,32,30,26,24,21,18,16,14,13,14,15,17,17,19,20,19,17,15,15,18,18,14,11,31,30,28,25,21,18,15,14,14,14,15,16,16,17,19,18,19,19,16,16,16,13,10,32,31,30,25,21,18,15,14,13,12,12,13,15,21,21,19,20,19,17,15,13,12,9,32,30,27,25,22,18,14,13,13,11,11,13,14,17,18,17,19,18,19,16,13,11,10,31,30,26,24,21,17,13,13,13,11,12,14,14,16,17,17,18,18,18,16,13,11,9],
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
