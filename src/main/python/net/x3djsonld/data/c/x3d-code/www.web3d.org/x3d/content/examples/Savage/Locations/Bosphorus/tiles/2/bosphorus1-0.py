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
    GeoViewpoint(description='GeoViewpoint_2_10',geoSystem=['GDC'],position=(41.280922627855375,28.73422636498435,57209.268365411845),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.280922627855375,28.73422636498435,0.0),range=68651.125,child1Url=['../../tiles/3/bosphorus1-0.x3d'],child2Url=['../../tiles/3/bosphorus1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/bosphorus1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028259654,zDimension=21,zSpacing=0.021867245,height=[18,84,110,122,43,0,119,168,125,8,5,15,121,59,52,92,100,11,46,35,1,-1,187,128,75,9,4,12,125,107,151,43,52,76,67,70,106,127,84,26,113,107,95,126,190,156,95,2,22,67,86,161,36,131,0,84,126,118,100,94,85,46,69,110,115,115,141,181,38,3,12,86,152,125,143,82,98,102,161,168,162,165,95,95,74,80,119,131,167,153,26,4,50,27,80,94,63,80,21,144,128,183,126,91,75,73,49,125,85,81,220,27,17,4,106,107,136,128,34,109,115,73,211,137,170,92,25,105,143,137,41,26,59,39,36,7,32,122,121,65,75,56,94,159,78,96,75,77,34,89,149,59,155,120,36,74,68,30,35,111,160,23,118,111,155,65,147,147,140,94,95,130,123,186,159,163,84,57,44,41,89,158,110,51,130,88,80,106,147,123,124,68,114,148,181,156,78,52,116,135,63,140,39,147,77,104,147,132,91,99,109,114,97,130,97,76,71,10,63,66,219,156,45,103,116,174,106,88,114,135,111,119,93,130,90,52,34,10,0,-1,2,0,113,115,106,58,112,57,127,64,48,121,19,65,63,72,15,0,-1,0,0,0,0,0,67,107,57,14,11,6,14,69,8,35,51,7,5,2,2,1,-2,0,2,0,3,1,76,64,132,38,5,46,36,22,40,54,5,-1,1,0,0,0,0,0,0,1,0,0,50,13,45,48,4,2,6,10,0,0,0,-1,0,4,0,0,1,1,0,2,1,0,10,52,22,12,1,9,0,0,0,0,0,3,0,-1,0,0,2,0,2,2,1,1,8,2,9,45,0,0,-2,0,0,0,0,0,1,0,0,-1,1,0,1,0,2,7,42,52,0,0,-2,0,-2,-2,-1,0,-3,0,2,0,1,0,4,0,0,0,4,1,0,-1,0,0,-2,4,-1,0,-1,-3,-2,-2,0,0,0,2,0,0,3,0,1,0,1,0,1,0,0,0,0,0,0,-1,1,0,0,0,3,0,3,1,2,0,1,2,0,0,0,1,0,0,1,0,0,-1,0,1,0,1,4,0,2,3,0,0,0,2],
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
