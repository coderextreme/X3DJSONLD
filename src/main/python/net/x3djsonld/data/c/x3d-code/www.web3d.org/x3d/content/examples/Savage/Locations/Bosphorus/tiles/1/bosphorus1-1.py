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
    GeoViewpoint(description='GeoViewpoint_1_11',geoSystem=['GDC'],position=(41.280922627855375,29.327679094953055,57209.268365411845),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.280922627855375,29.327679094953055,0.0),range=68651.125,child1Url=['../../tiles/2/bosphorus2-2.x3d'],child2Url=['../../tiles/2/bosphorus2-3.x3d'],child3Url=['../../tiles/2/bosphorus3-2.x3d'],child4Url=['../../tiles/2/bosphorus3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/bosphorus1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028259654,zDimension=21,zSpacing=0.021867245,height=[-1,151,91,141,163,180,222,135,180,294,135,66,101,104,98,179,161,224,194,201,129,115,126,132,93,122,135,188,372,214,128,173,66,82,56,174,178,155,151,207,179,72,129,134,115,2,57,138,136,231,318,153,178,94,23,32,121,139,153,174,200,199,151,59,133,130,131,-1,27,107,179,141,155,124,83,11,139,139,201,119,103,156,93,128,54,82,160,174,81,47,-3,204,262,109,162,114,14,14,80,118,122,147,129,72,135,120,15,92,156,153,26,0,19,51,239,123,96,173,37,137,137,79,139,128,100,153,134,123,30,2,22,30,120,43,39,184,154,60,72,73,4,113,80,54,114,119,69,104,94,98,30,4,51,51,163,195,-1,12,116,69,9,29,66,89,95,79,27,36,24,0,0,1,0,0,0,0,52,120,116,0,3,80,26,60,57,15,17,4,2,0,1,1,0,0,2,1,0,0,66,87,50,5,2,1,0,2,0,-1,0,1,1,1,0,0,0,4,3,4,0,0,0,0,0,0,1,0,1,1,0,0,0,0,1,1,0,2,2,0,4,0,0,0,0,0,0,1,1,1,2,0,0,0,0,0,0,1,0,0,2,3,0,1,-1,-2,1,1,1,2,2,2,0,-1,0,0,1,0,0,0,2,1,1,1,0,1,2,1,0,1,1,2,2,2,0,1,1,1,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,-1,-1,0,0,2,1,0,0,0,0,0,0,0,1,4,2,3,0,0,1,-1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,7,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,2,0,2,1,0,0,1,0,1,0,0,0,2,0,0,0,0,0,0,0,-1,0,0,0,0,1,0,0,0,0,2,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,2,2,0,1,0,0,0,1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,2,3,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0],
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
