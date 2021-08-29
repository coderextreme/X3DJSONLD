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
    GeoLOD(center=(41.62149034642794,-71.32952841188842,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-20.x3d'],child2Url=['../../tiles/5/newport20-21.x3d'],child3Url=['../../tiles/5/newport21-20.x3d'],child4Url=['../../tiles/5/newport21-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,7,14,18,13,8,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,17,17,22,23,17,12,10,4,0,0,0,0,0,0,0,0,0,0,0,0,8,15,27,28,26,28,24,17,16,12,3,0,0,0,0,0,0,0,0,0,0,0,9,19,24,24,28,32,30,22,25,21,17,0,0,0,0,0,0,0,0,0,0,0,13,20,24,22,29,34,32,26,28,31,26,10,0,0,0,0,0,0,0,0,0,0,15,18,22,22,28,31,28,26,30,31,31,18,2,0,0,0,0,0,0,0,0,0,1,20,25,26,29,33,31,31,33,36,35,25,16,14,0,0,0,0,0,0,0,0,0,12,27,30,28,33,35,39,39,40,40,36,24,21,0,0,0,0,0,0,0,0,0,13,21,27,33,33,34,39,42,44,48,51,41,31,0,0,0,0,0,0,0,0,0,4,17,29,31,29,35,46,47,48,51,58,47,42,0,0,0,0,0,0,0,0,0,0,3,18,23,28,30,41,44,45,51,58,53,51,0,0,0,0,0,0,0,0,0,0,0,1,17,26,29,37,36,44,49,57,55,49,0,0,0,0,0,0,0,0,0,0,0,8,14,30,33,31,36,39,47,56,40,39,0,0,0,0,0,0,0,0,0,0,0,0,16,28,32,31,33,39,42,44,36,37,0,0,0,0,0,0,0,0,0,0,0,0,0,18,32,33,34,34,36,37,33,33,0,0,0,0,0,0,0,0,0,0,0,0,0,17,30,35,33,31,26,27,28,29,0,0,0,0,0,0,0,0,0,0,0,0,0,13,13,25,31,24,17,18,25,25,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,9,16,22,16,12,12,11,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,4,9,10,13,6,6,5,0,0,0,0,0,0,0,0,0,0,0,0,1,5,3,3,11,8,4,1,1,1,0,0,0,0,0,0,0,0,2,4,3,8,6,5,0,1,5,4,0,0,0,0,0,0,0,0,0,0,0,0,3,4,4,7,7,3,1,0,5,2,0,0,0,0],
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
