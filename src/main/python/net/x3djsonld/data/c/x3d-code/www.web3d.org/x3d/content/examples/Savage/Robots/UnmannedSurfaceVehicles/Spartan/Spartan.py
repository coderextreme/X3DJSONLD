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

newModel=X3D(version='3.0',profile='Immersive',
  head=head(
    children=[
    meta(content='Spartan.x3d',name='title'),
    meta(content='Spartan unmanned surface vehicle (USV).',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='9 February 2003',name='created'),
    meta(content='9 February 2003',name='modified'),
    meta(content='spartan/hundt.SpartanSeaScoutNdia2002August13.pdf',name='reference'),
    meta(content='http://www.naval-industrypartners.com/02%20presentations/13aug02/breakout/session3/hundt.pdf',name='reference'),
    meta(content='spartan/Actd2002Announcement.b03052002_bt103-02.pdf',name='reference'),
    meta(content='http://www.defenselink.mil/news/Mar2002/b03052002_bt103-02.html',name='reference'),
    meta(content='spartan/IndustryQuestionsSpartanRoleMineWarfare.021014-navy1.pdf',name='reference'),
    meta(content='http://www.globalsecurity.org/org/news/2002/021014-navy1.htm',name='reference'),
    meta(content='spartan/SpartanHighSpeedUnmannedCraft.pdf',name='reference'),
    meta(content='spartan/highspeed_roxan.jpeg',name='reference'),
    meta(content='http://www.nationaldefensemagazine.org/article.cfm?Id=797',name='reference'),
    meta(content='TechTvRoboShips.pdf',name='reference'),
    meta(content='http://www.techtv.com/news/specialreport/wartech/story/0,24195,3370094,00.html',name='reference'),
    meta(content='Spartan USV',name='subject'),
    meta(content='model not yet created',name='TODO'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedSurfaceVehicles/Spartan.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator')]),
  Scene=Scene(),
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Spartan.py")
