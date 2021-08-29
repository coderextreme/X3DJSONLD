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
    GeoViewpoint(description='GeoViewpoint_3_05',geoSystem=['GDC'],position=(40.679573392779616,29.253497503706967,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.679573392779616,29.253497503706967,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus0-10.x3d'],child2Url=['../../tiles/4/bosphorus0-11.x3d'],child3Url=['../../tiles/4/bosphorus1-10.x3d'],child4Url=['../../tiles/4/bosphorus1-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus0-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[154,93,98,45,43,98,19,17,34,64,33,21,54,38,76,64,104,121,79,79,91,63,144,148,132,87,52,29,55,11,28,101,41,16,78,42,42,75,56,108,43,76,68,44,107,106,93,110,130,57,24,11,14,78,70,13,53,61,25,52,38,50,33,75,37,35,34,38,36,119,69,129,81,16,8,56,55,10,18,69,34,19,64,32,29,48,43,30,21,11,26,62,111,71,81,16,5,28,67,16,9,47,70,15,40,32,21,39,47,30,44,7,11,59,31,60,22,37,4,4,38,14,7,16,48,12,18,27,16,46,31,19,1,-2,1,4,3,3,4,1,2,2,3,4,7,8,9,8,9,12,10,27,34,14,0,0,1,-1,-1,0,1,0,2,-1,0,8,0,0,0,3,1,5,5,7,9,10,1,0,2,0,-2,2,0,1,0,-2,5,0,1,10,-8,-2,-1,0,0,2,4,4,2,2,0,0,4,0,2,1,2,-3,0,0,0,0,5,0,3,0,-2,0,0,0,1,0,0,0,0,1,2,0,0,4,0,0,0,1,7,1,0,2,2,0,0,-3,1,0,-3,-2,0,-1,2,-2,0,0,0,0,0,3,3,0,0,2,0,2,0,1,0,1,0,0,-1,1,0,0,0,1,0,0,0,0,1,0,0,1,0,1,0,0,0,-1,0,0,-1,0,-1,-1,-1,0,0,0,0,0,3,0,0,1,0,0,1,0,0,0,0,0,1,-1,0,0,0,0,0,0,-1,0,0,-2,2,0,0,0,2,0,0,-1,0,0,-3,-1,0,1,0,0,0,1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,-3,-2,-2,0,-1,0,0,0,-1,1,1,0,1,0,3,0,-2,-1,0,0,-2,-2,-1,-1,0,-2,1,0,0,0,0,0,0,3,0,0,0,0,0,0,-1,-1,0,0,0,-1,0,0,0,0,0,1,0,2,0,0,1,-1,0,0,3,0,0,-1,-4,-1,0,-2,0,0,0,0,0,0,-2,0,0,2,0,0,1,2,0,-1,-1,0,0,-2,-1,-1,0,2,0,1,0,-3,-2,0,0,0,3,0,1,0,0,0,0,0,0,-1,-3,-1,-1,5,0,3,1,-4,-1,0,0,0,3,0,1,0,0],
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
