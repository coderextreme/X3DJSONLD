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
    GeoLOD(center=(41.47634988941996,-71.32952841188842,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-20.x3d'],child2Url=['../../tiles/5/newport14-21.x3d'],child3Url=['../../tiles/5/newport15-20.x3d'],child4Url=['../../tiles/5/newport15-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,3,0,0,0,0,0,3,0,0,0,0,1,0,0,0,0,0,0,3,0,0,10,7,2,2,2,5,0,2,0,0,0,0,0,0,0,0,0,0,0,0,10,10,11,8,4,3,6,13,5,2,2,0,7,5,0,0,0,0,4,0,0,0,9,9,13,8,5,2,14,13,13,20,9,0,3,0,0,0,0,0,2,9,0,0,2,4,13,11,10,4,2,5,10,17,14,8,0,0,0,7,0,0,9,10,0,0,4,7,13,13,11,6,2,2,22,16,24,21,8,4,1,6,16,0,9,9,0,0,5,8,12,12,8,2,3,3,11,17,17,23,29,15,0,6,15,0,6,12,8,1,5,7,16,13,11,10,6,5,3,10,15,15,28,18,12,20,16,16,12,11,13,3,5,10,0,0,0,14,16,17,10,7,0,7,13,11,14,16,18,10,6,5,9,12,10,12,0,0,0,0,12,20,9,0,0,0,0,11,12,10,22,22,3,0,3,4,15,16,0,0,0,0,0,7,10,6,0,0,0,0,0,1,6,9,2,0,3,6,15,16,0,0,0,0,0,0,8,7,0,0,0,0,0,0,0,0,0,0,2,10,16,18,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,1,12,18,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,21,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,14,24,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,19,27,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,13,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,13,22,23],
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
