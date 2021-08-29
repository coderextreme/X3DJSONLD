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
    GeoViewpoint(description='GeoViewpoint_3_26',geoSystem=['GDC'],position=(40.898245841898074,29.401860686199143,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.898245841898074,29.401860686199143,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus4-12.x3d'],child2Url=['../../tiles/4/bosphorus4-13.x3d'],child3Url=['../../tiles/4/bosphorus5-12.x3d'],child4Url=['../../tiles/4/bosphorus5-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus2-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[43,48,49,36,72,64,42,69,99,99,143,167,183,200,210,238,189,170,162,126,99,102,60,79,98,57,42,73,65,58,66,111,139,130,175,210,248,233,195,152,137,131,129,156,100,107,164,88,49,84,85,69,99,116,136,156,184,237,248,226,216,179,171,167,163,166,159,156,138,115,66,82,84,73,98,138,157,159,201,251,240,210,192,176,176,168,170,175,155,131,117,86,69,79,97,108,120,113,128,162,204,257,238,236,219,185,179,197,187,182,107,105,116,151,98,75,89,118,127,142,135,185,199,245,231,231,228,192,190,229,212,194,82,88,97,162,104,71,101,113,128,138,161,188,214,219,220,209,216,192,202,204,229,220,80,97,101,158,106,98,91,108,108,143,165,198,230,213,203,202,216,202,224,229,246,263,49,78,96,106,93,99,105,118,137,149,167,203,244,237,219,207,203,220,246,258,248,258,51,94,89,88,105,106,117,127,159,175,182,208,257,238,236,207,195,224,270,337,285,267,45,64,82,99,99,106,114,137,158,185,199,223,235,222,242,203,185,216,243,243,283,265,74,107,90,93,104,105,117,134,167,193,202,207,238,231,227,201,174,197,217,228,246,247,60,81,79,100,103,106,131,144,163,204,195,212,216,225,204,194,171,187,204,220,219,239,88,76,85,101,104,109,139,162,184,212,194,182,211,236,244,230,184,166,183,196,241,248,67,80,103,101,97,108,126,145,197,208,194,168,203,196,239,236,214,176,175,213,216,240,71,103,116,113,103,104,145,150,180,198,196,183,174,204,247,227,226,215,159,167,202,202,100,157,132,107,98,100,116,151,165,178,169,154,178,198,239,214,188,186,184,149,194,206,92,137,155,116,96,102,115,126,143,185,154,174,199,223,241,191,172,179,151,138,204,229,98,92,93,103,89,109,112,136,145,164,149,182,216,184,218,187,150,173,168,135,180,192,115,108,99,106,85,89,102,132,148,146,165,186,184,177,176,183,157,143,212,143,157,167,129,136,104,82,81,101,112,134,132,137,167,165,153,149,167,184,186,148,152,154,154,151,133,142,103,86,81,103,111,135,131,138,168,161,152,147,166,183,190,152,151,152,149,148],
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
