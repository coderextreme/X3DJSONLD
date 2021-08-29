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
    GeoViewpoint(description='GeoViewpoint_3_17',geoSystem=['GDC'],position=(40.788909617338845,29.55022386869132,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.788909617338845,29.55022386869132,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus2-14.x3d'],child2Url=['../../tiles/4/bosphorus2-15.x3d'],child3Url=['../../tiles/4/bosphorus3-14.x3d'],child4Url=['../../tiles/4/bosphorus3-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus1-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.73424150505923,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[0,1,0,0,0,1,0,0,2,1,0,1,0,0,1,2,3,2,1,1,6,4,0,0,1,2,0,0,1,1,0,0,1,0,0,0,3,3,3,1,4,-1,1,-2,1,0,0,0,0,0,1,0,-1,1,1,5,3,3,1,1,2,2,4,0,1,1,0,0,0,1,0,2,0,0,0,4,2,1,2,5,4,1,3,0,3,6,1,0,1,0,0,0,1,0,0,0,0,2,0,0,2,5,0,3,1,1,0,-3,-17,-6,0,1,0,0,2,5,0,-1,3,0,0,0,7,0,3,3,4,3,-2,-1,-1,-1,12,-2,0,-3,0,-9,-11,-23,-16,0,15,11,-2,0,2,2,4,0,-3,0,0,0,-2,1,1,4,1,-7,9,0,7,7,8,91,-1,4,13,1,0,3,0,0,1,3,-2,-2,0,-1,-1,2,35,38,4,82,49,44,54,77,96,55,6,-8,7,-1,-3,0,65,33,6,7,8,75,95,73,5,9,46,143,137,69,141,139,84,44,1,-3,0,2,105,100,69,93,46,60,104,67,7,20,54,146,159,170,165,196,144,172,77,23,13,23,132,116,151,129,85,112,94,18,11,87,136,98,174,119,149,185,220,284,226,94,94,117,154,131,181,159,121,97,87,43,12,46,137,171,216,189,188,221,284,323,344,230,192,238,172,156,168,177,153,146,131,66,15,78,182,220,204,227,218,259,282,272,274,342,254,277,170,172,174,158,173,161,164,138,15,101,166,237,224,217,238,216,242,256,277,340,375,388,151,142,180,163,159,161,161,112,19,185,242,267,277,269,260,298,230,284,309,320,358,356,156,141,167,169,150,106,116,33,92,237,266,278,311,314,301,284,243,311,312,299,356,372,178,158,128,165,94,56,90,99,108,227,248,316,329,315,324,306,245,257,269,328,377,412,208,190,163,139,93,34,40,142,223,218,245,280,301,327,289,284,247,317,321,323,316,336,179,171,190,121,50,34,56,173,188,222,261,295,332,326,340,352,328,258,274,323,346,343,92,75,99,146,44,67,87,177,206,223,286,335,348,329,313,344,313,256,277,270,280,286,102,78,92,146,44,76,84,179,200,217,282,335,351,330,314,341,311,256,280,269,281,287],
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
