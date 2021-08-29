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
    GeoViewpoint(description='GeoViewpoint_2_23',geoSystem=['GDC'],position=(41.171586403296146,29.47604227744523,28604.634182705922),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.171586403296146,29.47604227744523,0.0),range=34325.562,child1Url=['../../tiles/3/bosphorus4-6.x3d'],child2Url=['../../tiles/3/bosphorus4-7.x3d'],child3Url=['../../tiles/3/bosphorus5-6.x3d'],child4Url=['../../tiles/3/bosphorus5-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/bosphorus2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[132,69,71,78,102,100,93,149,111,129,166,105,188,169,226,214,216,238,235,194,218,136,165,74,64,61,61,89,162,225,203,101,108,176,228,191,205,219,220,212,109,99,66,134,68,41,84,67,57,173,166,224,175,144,128,162,157,168,196,246,148,80,61,176,174,116,44,20,79,57,80,106,188,219,106,146,166,193,187,203,202,192,186,140,125,123,127,149,17,16,35,129,127,156,156,186,166,188,174,202,194,193,190,220,139,77,59,102,91,141,14,49,51,80,183,167,130,158,117,143,165,191,146,166,180,90,90,63,123,100,144,131,130,141,146,86,198,182,112,105,92,132,159,174,87,118,163,146,109,48,119,102,127,170,62,83,142,139,127,139,80,103,77,102,91,127,118,45,91,20,36,42,67,117,46,101,86,90,116,166,128,121,138,109,145,128,83,73,130,55,152,86,19,51,25,56,112,157,83,125,98,121,122,147,116,136,122,133,137,141,163,161,139,65,120,70,54,65,123,108,134,101,74,116,138,105,129,105,101,130,147,111,135,123,99,44,38,70,11,65,59,19,134,131,82,89,116,123,122,120,108,49,110,96,89,98,63,60,14,6,0,3,36,60,74,106,59,92,106,65,112,76,57,58,101,38,71,64,94,89,37,3,6,9,35,49,103,89,72,87,37,94,72,101,87,89,28,36,4,4,0,0,1,0,1,0,2,0,89,63,79,66,35,74,25,28,29,4,0,-1,0,0,0,2,4,0,0,0,1,0,89,88,51,60,60,9,9,0,0,0,0,0,0,1,1,0,2,0,0,1,0,1,4,0,3,1,2,0,0,0,1,1,1,1,3,2,0,0,1,0,1,1,0,0,1,0,0,0,1,0,1,1,1,1,0,2,1,0,0,2,1,0,1,0,1,2,1,1,1,0,0,0,1,0,0,1,0,0,0,0,2,1,4,2,3,1,3,0,0,2,0,0,0,0,0,1,0,1,1,0,0,1,2,0,0,4,0,2,1,0,0,2,0,0,0,0,0,1,0,1,1,0,0,1,2,1,1,4,1,1,0,0],
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
