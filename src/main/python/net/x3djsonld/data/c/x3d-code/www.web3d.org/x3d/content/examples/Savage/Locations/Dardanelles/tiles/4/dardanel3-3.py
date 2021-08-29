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
    component(level=1,name='Geospatial'),
    meta(content='dardanel3-3.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel3-3.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel3-3.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.535646763531965,26.983082655714444,0.0),geoSystem=["GD"],height=[0,2,0,3,1,1,1,4,0,0,-2,1,4,0,0,0,0,0,0,0,0,-1,1,0,2,1,3,3,1,0,0,0,2,1,1,1,0,1,-1,-1,-1,0,1,0,17,7,0,0,2,0,2,0,2,2,0,3,1,1,0,0,1,0,0,0,-1,-4,74,29,1,2,2,1,2,1,3,1,1,4,0,0,1,0,1,1,0,0,-1,-1,223,139,59,4,2,2,1,4,4,2,2,0,0,0,0,0,0,0,0,0,1,-1,296,198,68,86,34,12,12,0,7,0,0,3,4,1,-3,2,4,1,2,-1,0,-1,218,381,201,100,115,68,98,61,9,5,3,1,1,1,4,1,-3,-1,0,0,-4,-1,94,161,240,281,198,125,191,209,79,34,8,5,-1,0,3,3,0,2,3,0,0,-1,75,179,101,142,272,258,399,292,327,288,122,12,-4,0,1,4,1,0,0,0,0,0,97,95,90,169,98,127,320,476,612,343,117,194,103,0,2,1,0,0,0,0,0,0,146,152,48,267,253,156,252,293,349,344,327,212,278,170,-12,2,2,0,0,0,0,2,245,235,134,173,314,287,208,408,558,429,384,267,114,65,82,-5,0,0,0,0,1,0,309,219,210,133,201,269,308,371,449,631,630,484,374,239,115,2,-2,0,0,0,0,1,286,270,183,92,179,217,254,276,385,658,674,688,704,507,231,0,0,1,1,1,1,0,193,187,143,124,110,99,144,184,259,447,437,583,798,819,513,398,-2,1,1,0,0,0,198,98,136,133,143,109,180,253,181,291,282,360,569,610,818,555,109,1,-1,0,-1,0,108,121,135,133,164,115,106,143,239,185,266,366,317,478,702,637,585,373,2,0,-1,0,121,140,176,133,192,120,200,127,162,258,262,258,313,317,368,346,415,354,298,132,0,0,132,157,166,138,227,125,216,211,153,247,326,304,269,282,237,279,224,201,307,152,-1,0,166,180,207,185,185,161,162,249,275,265,227,325,227,261,271,267,123,62,52,68,5,0,183,147,152,168,174,252,219,208,275,198,340,305,259,193,196,270,179,50,77,9,2,0,180,144,151,164,173,253,220,206,278,204,339,306,263,198,192,272,171,58,82,8,3,-1],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for dardanel3-3.py")
