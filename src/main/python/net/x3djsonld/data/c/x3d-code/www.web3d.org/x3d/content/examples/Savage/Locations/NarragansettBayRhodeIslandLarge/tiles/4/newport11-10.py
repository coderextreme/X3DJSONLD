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
    GeoLOD(center=(41.669870498763935,-71.32952841188842,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-20.x3d'],child2Url=['../../tiles/5/newport22-21.x3d'],child3Url=['../../tiles/5/newport23-20.x3d'],child4Url=['../../tiles/5/newport23-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,3,4,4,7,7,3,1,0,5,2,0,0,0,0,0,0,15,7,5,10,7,2,1,10,5,0,0,0,0,0,0,0,0,0,0,0,0,3,14,15,9,9,9,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,18,19,11,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,20,23,12,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,22,15,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,17,13,8,2,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,10,14,10,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,2,5,8,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,3,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,7,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,9,13,17,9,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,14,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
