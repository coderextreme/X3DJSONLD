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
    GeoViewpoint(description='GeoViewpoint_3_24',geoSystem=['GDC'],position=(40.898245841898074,29.10513432121479,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.898245841898074,29.10513432121479,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus4-8.x3d'],child2Url=['../../tiles/4/bosphorus4-9.x3d'],child3Url=['../../tiles/4/bosphorus5-8.x3d'],child4Url=['../../tiles/4/bosphorus5-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus2-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[0,0,0,-1,-1,-2,-2,-1,-2,-1,-2,0,1,1,0,0,0,-1,-1,0,0,0,0,0,-1,0,-1,-1,0,-2,-2,-1,0,0,146,13,-2,0,0,1,-1,0,0,-1,0,0,-1,0,0,0,-1,-1,-1,0,0,0,104,68,0,-2,17,-1,-1,1,-2,-1,0,0,0,-2,-1,-3,0,-2,0,-1,-2,0,165,38,-1,0,11,0,-3,0,-1,-1,0,0,0,-2,-1,0,-2,0,0,0,0,0,42,24,0,-1,0,-2,0,0,0,-1,0,-1,0,0,0,0,-3,-2,0,0,0,0,16,129,40,-1,-2,-1,0,0,0,-1,0,-1,0,-1,-1,-2,-1,27,8,3,0,-1,49,85,67,1,-2,-2,0,0,0,-1,0,0,-1,0,7,7,-2,84,30,117,2,0,0,0,5,3,0,0,0,-1,0,-1,-1,-1,0,0,126,31,1,0,7,29,1,0,-2,-1,0,0,0,-1,-1,0,3,-1,0,-1,-1,-1,36,40,0,0,-1,26,0,0,0,0,0,0,0,-5,-1,0,-6,-9,-1,-1,0,0,-1,0,-2,1,-2,0,0,-2,0,-1,0,0,0,0,-4,-20,0,7,-1,0,0,0,-1,-1,0,0,0,-1,0,0,0,0,1,-5,1,1,-20,0,13,16,0,0,-1,-1,-1,0,0,0,-1,-1,0,0,0,0,-4,0,-3,-9,2,6,32,38,0,0,0,67,0,-1,-1,0,0,0,-1,0,0,-1,-2,0,65,16,7,18,53,58,0,-2,103,63,0,-1,0,-1,-2,0,0,0,-1,0,-5,7,93,18,25,32,38,40,0,0,1,0,0,0,0,0,-2,-1,1,0,2,-38,0,3,11,21,25,39,52,58,0,0,0,0,-1,-2,0,-1,0,-3,0,0,-2,-2,7,18,34,51,51,58,53,54,0,0,0,-1,0,0,2,0,-1,0,-1,0,-3,5,20,41,62,76,89,98,82,78,-1,-2,0,0,0,0,0,0,0,0,4,0,0,31,17,36,72,108,180,148,134,131,0,0,0,0,0,0,0,0,0,0,0,-2,8,7,43,42,67,122,248,202,264,277,0,0,0,0,0,-2,-1,0,0,-1,-1,0,14,40,32,64,79,119,215,316,333,310,0,0,0,0,0,-1,-2,0,0,-3,-2,1,15,43,30,66,78,120,207,318,337,311],
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
