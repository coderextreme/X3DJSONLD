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
    GeoLOD(center=(41.86339110810791,-71.32952841188842,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-20.x3d'],child2Url=['../../tiles/5/newport30-21.x3d'],child3Url=['../../tiles/5/newport31-20.x3d'],child4Url=['../../tiles/5/newport31-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[14,7,5,6,6,10,13,18,13,14,13,13,13,13,14,13,17,27,27,33,41,38,15,7,7,7,11,11,17,18,13,13,12,13,14,15,15,16,19,27,28,35,36,31,11,5,6,9,11,13,15,13,18,14,14,13,14,14,14,17,21,24,24,37,34,31,9,4,5,5,16,14,14,17,14,14,14,15,15,15,15,16,21,23,27,31,26,25,5,5,6,6,13,14,15,18,15,14,14,15,16,16,17,20,21,23,25,23,22,22,5,4,7,15,12,11,16,17,17,15,14,14,15,17,23,27,23,20,23,29,26,27,5,5,13,16,16,10,14,17,17,17,15,14,13,15,27,24,18,20,26,28,33,37,5,13,17,17,17,14,14,14,16,16,15,15,17,14,19,18,17,19,17,26,41,42,15,15,16,20,18,18,14,14,15,18,16,15,17,18,18,18,17,18,16,23,32,33,16,17,18,18,18,15,14,14,14,17,18,17,18,20,21,20,19,16,16,18,28,31,18,18,18,17,16,14,14,14,18,18,19,17,18,20,20,17,16,15,16,21,31,32,18,18,18,17,14,14,17,18,18,18,21,17,19,22,19,16,16,16,18,26,26,25,18,18,19,18,14,14,18,19,19,18,19,18,21,24,20,19,16,17,17,23,24,23,21,20,19,18,15,14,19,20,21,20,21,21,21,24,25,26,18,21,19,23,23,23,21,20,19,19,19,16,17,23,23,23,23,23,22,24,23,23,22,20,23,23,23,25,19,20,21,19,20,14,14,24,22,23,19,21,26,25,23,22,24,21,24,23,23,24,20,21,21,13,20,16,14,16,14,15,18,18,27,26,26,26,28,26,23,23,24,24,21,20,19,16,21,15,14,14,21,19,18,16,22,27,29,35,30,30,27,22,30,27,22,22,22,22,21,17,14,14,14,22,23,19,17,24,26,30,29,34,31,23,29,28,22,23,24,23,22,21,17,14,14,21,22,20,17,19,22,26,32,34,26,26,27,29,23,23,22,22,20,16,13,14,17,17,19,21,18,19,21,30,36,26,24,27,34,37,23,23,22,22,20,16,13,15,16,17,19,21,18,18,21,30,37,25,24,28,35,37],
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
