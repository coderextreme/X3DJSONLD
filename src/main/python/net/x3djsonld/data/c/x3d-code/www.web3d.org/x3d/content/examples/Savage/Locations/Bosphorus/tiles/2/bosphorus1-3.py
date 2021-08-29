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
    GeoViewpoint(description='GeoViewpoint_2_13',geoSystem=['GDC'],position=(40.95291395417769,29.47604227744523,28604.634182705922),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.95291395417769,29.47604227744523,0.0),range=34325.562,child1Url=['../../tiles/3/bosphorus2-6.x3d'],child2Url=['../../tiles/3/bosphorus2-7.x3d'],child3Url=['../../tiles/3/bosphorus3-6.x3d'],child4Url=['../../tiles/3/bosphorus3-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/bosphorus1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[36,58,73,38,90,135,195,185,172,149,145,145,62,60,199,280,342,321,339,259,292,297,102,136,46,79,81,118,200,260,189,169,153,116,92,111,190,223,303,372,292,271,286,286,185,106,62,99,114,136,207,232,219,166,180,180,166,149,183,235,253,260,270,274,308,337,86,107,93,96,135,161,219,232,214,197,207,193,175,140,186,263,259,296,345,351,298,320,61,103,91,93,140,177,237,212,206,242,251,258,206,166,175,216,269,269,279,312,322,317,30,79,98,123,153,193,248,229,189,250,272,252,215,167,227,233,237,283,280,304,313,311,47,85,103,137,165,198,222,197,167,196,244,259,182,189,239,250,226,265,340,348,317,310,63,99,101,126,198,195,206,247,205,169,226,217,181,167,218,272,267,250,354,299,342,296,108,130,93,118,165,174,179,246,197,177,197,204,188,157,184,274,353,306,312,340,278,317,103,93,83,114,147,157,214,210,153,163,184,162,192,172,227,217,307,356,226,293,309,290,132,109,86,115,135,166,145,164,191,156,146,175,147,176,236,240,276,330,263,238,349,305,179,83,114,114,100,115,148,150,139,108,165,191,168,206,300,251,256,330,322,206,269,217,129,68,87,86,98,129,142,173,159,104,191,215,172,203,263,290,302,317,363,278,215,189,96,63,68,106,115,107,126,235,227,101,166,197,275,287,252,239,242,250,300,313,213,219,129,102,61,104,103,121,115,150,125,136,176,219,303,340,368,248,238,230,296,363,301,351,132,70,77,94,88,121,79,141,92,157,199,228,289,251,292,248,187,218,307,347,236,298,82,69,122,104,94,91,77,136,126,153,195,174,273,203,238,173,175,235,263,307,237,185,86,66,76,93,87,98,76,76,180,122,143,208,198,206,191,171,227,269,284,311,207,261,134,125,78,77,61,68,89,113,120,215,209,202,132,152,158,182,241,199,244,230,153,199,134,70,66,75,103,102,94,150,107,135,157,106,190,185,227,210,211,237,237,198,219,124,132,69,71,78,102,100,93,149,111,129,166,105,188,169,226,214,216,238,235,194,218,136],
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
