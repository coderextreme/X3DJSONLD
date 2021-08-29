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
    GeoLOD(center=(41.62371823998276,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport22-0.x3d'],child2Url=['../../tiles/5/newport22-1.x3d'],child3Url=['../../tiles/5/newport23-0.x3d'],child4Url=['../../tiles/5/newport23-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[10,12,12,12,10,9,11,11,11,11,9,10,8,9,7,9,13,4,9,13,17,16,14,13,12,11,13,11,10,11,11,11,11,10,10,12,12,13,11,11,12,12,14,13,15,17,18,13,13,12,10,12,10,11,11,11,12,13,13,11,13,12,13,17,16,17,15,17,20,15,14,13,12,13,12,13,13,12,12,13,12,13,14,13,13,15,17,17,19,18,16,18,13,11,12,14,13,12,14,14,12,12,13,13,16,16,14,17,16,17,16,17,15,17,18,15,14,13,13,14,14,14,11,10,12,14,15,15,14,18,18,17,17,17,18,18,18,14,13,13,14,13,14,12,13,12,13,12,13,15,13,13,16,18,19,19,18,15,17,16,14,14,14,15,14,13,14,12,13,15,15,13,14,15,16,18,22,20,18,17,15,13,12,9,16,15,13,14,14,14,13,14,16,16,15,15,15,16,14,14,17,17,16,14,12,8,8,16,19,16,15,14,15,15,16,16,16,14,14,15,14,14,13,15,15,12,11,9,9,8,18,14,17,17,14,14,17,15,16,17,16,15,13,12,13,13,14,10,8,10,10,7,3,21,19,15,15,17,17,18,16,14,11,15,14,14,14,14,10,7,7,9,4,3,5,3,26,22,19,17,16,17,14,16,14,13,13,10,11,13,12,10,6,6,8,3,3,2,2,29,26,24,16,15,16,14,14,14,12,14,14,11,11,9,8,7,6,3,5,2,2,2,30,26,26,23,18,13,13,15,16,14,13,14,11,9,7,5,2,3,5,5,6,3,5,31,33,32,27,21,15,14,13,13,14,14,13,9,9,8,5,4,3,6,7,6,4,3,25,26,24,24,23,19,17,16,15,14,13,12,10,7,6,7,8,8,7,7,7,7,6,25,25,25,21,21,19,17,15,15,14,13,11,12,7,6,7,7,11,11,9,8,8,9,25,24,22,20,20,19,17,16,15,15,10,9,8,7,10,10,10,8,10,11,10,10,10,23,20,20,20,18,18,16,15,14,12,10,9,9,10,11,12,12,10,8,9,12,11,9,20,19,17,18,17,14,14,14,12,11,11,10,11,12,14,11,10,9,8,9,9,10,7,21,17,16,16,16,13,13,13,11,10,10,11,12,11,10,10,11,11,11,10,9,10,7,22,21,19,15,13,13,11,10,9,9,9,10,11,12,10,10,11,12,14,12,10,8,9,22,21,19,15,13,13,11,10,9,9,9,9,10,13,11,10,11,12,14,12,10,8,10],
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
