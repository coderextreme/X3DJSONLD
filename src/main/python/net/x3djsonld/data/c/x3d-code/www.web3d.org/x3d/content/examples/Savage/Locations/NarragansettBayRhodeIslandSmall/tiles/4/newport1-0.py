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
    GeoLOD(center=(41.46230108443253,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport2-0.x3d'],child2Url=['../../tiles/5/newport2-1.x3d'],child3Url=['../../tiles/5/newport3-0.x3d'],child4Url=['../../tiles/5/newport3-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45423022665502,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[12,11,10,9,8,6,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,10,10,10,9,7,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,11,11,11,11,9,8,7,6,2,0,0,0,0,0,0,0,0,0,0,0,0,11,11,11,11,11,12,10,10,9,8,5,1,0,0,0,0,0,0,0,0,0,0,0,13,14,14,14,14,13,11,11,11,10,8,3,0,0,0,0,0,0,0,0,0,0,0,14,15,15,15,15,14,13,11,11,11,9,3,0,0,0,0,0,0,0,0,0,0,0,15,15,15,15,15,14,14,13,12,11,7,0,0,0,0,0,0,0,0,0,0,0,0,18,19,20,19,18,17,14,13,11,8,2,0,0,0,0,0,0,0,0,0,0,0,0,19,21,21,21,20,17,15,12,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,22,23,20,18,15,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,26,24,20,17,13,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,28,27,24,20,16,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,25,26,25,21,18,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,25,26,24,20,16,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,25,26,24,19,14,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,26,26,24,18,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,26,25,22,17,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,28,25,22,17,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,30,28,23,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,28,22,17,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,31,28,23,18,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,34,30,24,17,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,35,31,24,15,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,36,31,24,16,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
