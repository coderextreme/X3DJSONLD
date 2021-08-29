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
    GeoLOD(center=(41.71825065109993,-71.19761628762797,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-26.x3d'],child2Url=['../../tiles/5/newport24-27.x3d'],child3Url=['../../tiles/5/newport25-26.x3d'],child4Url=['../../tiles/5/newport25-27.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-13.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[1,1,1,1,1,1,1,1,1,1,1,1,1,5,11,17,32,51,61,60,58,54,1,1,1,1,1,1,1,1,1,1,1,1,1,6,10,17,28,37,49,57,60,59,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,15,23,31,43,48,55,61,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,15,24,36,40,44,47,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,13,26,32,37,38,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,14,24,28,30,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,10,17,19,18,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,8,7,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,6,1,1,1,1,1,9,7,1,1,1,1,2,1,1,1,1,1,1,7,10,10,10,4,2,1,1,1,4,3,4,1,1,3,11,10,8,1,1,1,1,1,7,11,12,10,5,1,1,1,1,2,7,15,3,9,18,15,15,1,1,1,1,1,1,4,9,13,10,5,1,1,8,2,2,10,13,17,24,21,19,1,1,1,1,1,1,1,1,13,12,9,6,1,8,2,7,10,13,17,31,26,23,1,1,1,1,1,1,1,1,13,14,10,7,1,1,1,2,4,10,20,30,28,26,1,1,1,1,5,3,5,4,12,17,13,7,1,1,1,6,7,8,14,25,31,29,1,1,1,2,6,4,5,4,12,17,13,7,2,1,1,7,7,8,14,25,30,30],
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
