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
    GeoViewpoint(description='GeoViewpoint_3_62',geoSystem=['GDC'],position=(41.33559074013499,28.80840795623044,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.33559074013499,28.80840795623044,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus12-4.x3d'],child2Url=['../../tiles/4/bosphorus12-5.x3d'],child3Url=['../../tiles/4/bosphorus13-4.x3d'],child4Url=['../../tiles/4/bosphorus13-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus6-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.280922627855375,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[109,115,141,129,116,132,141,133,92,131,54,89,130,79,97,74,88,105,59,35,56,55,112,84,99,128,129,118,129,101,101,61,47,81,80,80,88,52,35,95,46,19,29,49,105,57,61,73,94,137,132,113,51,71,59,74,81,72,84,57,53,104,62,61,17,7,81,44,38,42,82,107,63,51,77,40,23,40,93,67,65,23,47,64,84,18,7,7,29,18,31,46,68,82,54,43,55,39,23,62,76,58,68,9,16,13,6,-12,-5,0,18,11,26,52,53,60,50,42,75,45,10,16,30,30,3,12,11,-3,2,5,0,0,19,17,53,62,58,56,59,52,69,39,9,9,14,20,4,1,2,0,-1,1,1,1,26,20,35,54,20,27,22,29,24,27,-9,0,7,5,4,0,1,0,0,0,0,0,43,54,20,46,25,33,39,2,2,2,-17,-13,1,0,2,0,0,1,1,0,3,0,23,31,15,28,-6,1,30,20,-4,0,-3,1,0,-2,0,1,2,0,-2,2,0,0,20,17,52,1,1,5,5,2,-1,0,0,0,0,2,0,2,0,0,0,1,0,0,6,-16,4,8,-33,3,0,0,-3,0,0,-1,1,0,0,0,3,0,3,0,0,0,8,1,9,-1,1,0,1,1,0,1,0,0,2,0,2,0,2,0,0,0,0,0,2,0,1,0,-1,0,-3,0,2,1,1,0,1,0,0,0,0,0,0,0,1,0,0,-1,0,-1,0,1,1,1,-1,0,0,1,0,0,0,2,0,0,1,0,0,2,-1,1,0,0,-1,0,0,3,0,0,1,0,1,1,0,1,0,0,-2,0,0,0,0,0,0,0,2,0,1,-2,1,3,0,1,0,0,0,0,0,0,0,-1,1,0,0,0,4,0,0,0,-1,1,1,3,0,2,-2,0,-1,2,2,1,-1,1,0,0,-1,1,0,1,2,0,0,1,2,-1,1,1,-1,0,1,0,-1,0,0,0,0,1,1,-1,3,-1,0,1,-2,0,0,1,0,0,2,0,0,0,-2,0,0,0,0,1,0,-1,0,1,0,0,0,0,2,1,3,1,1,-1,0,0,0,-1,-1,0,0,1,0,-1,2,0,1,0,0,0,2,1,2,0,0,-1,0,1,0,0,-2,0,0,0],
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
