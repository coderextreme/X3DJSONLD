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
    GeoLOD(center=(41.52473004175595,-71.32952841188842,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-20.x3d'],child2Url=['../../tiles/5/newport16-21.x3d'],child3Url=['../../tiles/5/newport17-20.x3d'],child4Url=['../../tiles/5/newport17-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,13,22,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,14,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,4,11,9,10,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,4,8,13,15,15,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,4,7,11,15,18,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,7,5,5,9,17,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,6,6,4,12,15,0,0,0,0,0,0,0,0,0,0,0,0,1,0,3,9,8,6,0,9,19,24,0,0,0,0,0,0,0,0,0,0,0,15,11,4,1,7,6,4,8,17,30,32,0,0,0,0,0,0,0,0,0,0,0,6,7,5,0,1,4,9,13,29,50,40,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,3,4,14,24,39,37,38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,10,16,29,29,26,29,0,0,0,0,0,0,0,0,0,0,0,0,1,4,11,16,18,10,15,15,14,13,0,0,0,0,0,0,0,0,0,0,0,0,8,17,19,5,0,0,1,9,12,11,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,10,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,13,16,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,23,28,0,0,0,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,33,34,0,0,0,0,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,37,34,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,19,24,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,17,20],
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
