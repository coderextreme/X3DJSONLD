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
    GeoViewpoint(description='GeoViewpoint_3_53',geoSystem=['GDC'],position=(41.22625451557576,28.956771138722615,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.22625451557576,28.956771138722615,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus10-6.x3d'],child2Url=['../../tiles/4/bosphorus10-7.x3d'],child3Url=['../../tiles/4/bosphorus11-6.x3d'],child4Url=['../../tiles/4/bosphorus11-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus5-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.882589547476528,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[106,34,67,57,25,47,55,66,77,110,87,153,148,161,141,174,110,144,141,57,6,4,86,53,87,45,34,75,80,51,72,113,127,143,179,178,167,124,145,106,88,15,36,41,86,81,73,31,49,54,103,64,87,94,97,132,109,155,167,115,111,90,41,71,96,99,98,34,75,30,66,94,102,80,77,77,81,97,140,143,138,113,62,84,73,167,223,202,36,36,38,47,36,88,96,72,86,114,83,98,118,159,138,113,70,155,116,207,147,126,35,51,55,64,64,62,116,84,117,136,97,109,144,139,160,118,152,206,214,221,151,138,45,57,85,81,66,78,73,104,99,137,133,85,110,114,165,167,175,144,226,222,191,202,93,75,64,101,93,54,109,131,104,132,119,106,102,149,170,183,182,226,205,194,195,201,104,91,70,102,102,66,75,90,131,128,123,121,159,181,187,171,200,151,106,154,130,140,69,121,101,116,89,103,74,115,151,177,162,112,164,173,221,189,187,169,89,94,88,93,76,84,110,120,73,106,118,87,169,170,189,131,149,201,190,199,198,151,119,79,64,77,63,116,145,88,96,118,139,146,115,167,174,153,155,194,141,170,161,172,99,140,76,55,72,81,132,104,124,149,108,149,153,153,192,140,165,109,145,126,142,109,116,67,98,66,90,135,146,108,138,132,156,158,175,178,187,163,115,157,159,86,50,47,92,83,51,49,101,123,129,127,175,129,150,157,139,129,187,109,100,91,97,103,71,30,57,61,95,70,117,140,129,152,156,157,142,127,132,84,103,139,75,81,23,43,83,42,16,64,80,100,132,115,145,111,97,119,104,69,71,119,45,71,77,44,48,19,11,46,32,41,78,62,127,107,117,122,62,111,81,53,77,72,46,33,71,68,75,46,17,7,17,31,42,35,134,86,115,49,66,114,82,65,52,18,44,22,29,60,71,20,5,4,0,0,1,0,72,80,26,41,95,60,43,38,24,36,14,18,4,5,9,6,1,0,3,-4,0,0,57,53,27,42,35,26,8,8,10,27,21,12,0,-1,-2,0,0,0,0,0,0,1,55,58,27,41,34,31,6,10,10,28,19,8,0,-1,-3,0,0,-1,0,0,0,2],
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
