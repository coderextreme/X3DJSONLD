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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='Query.x3d',name='title'),
    meta(content='Query browser state: this world uses the "Browser" object in a script to query information about the VRML browser. That information is sent out as an MFString event that is routed into a Text node string input. The effect is to display a text message showing the Browser information. To give the browser something to do to make it report interesting frame rates, an animating object is displayed beside the text information.',name='description'),
    meta(content='David R. Nadeau',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 July 1998',name='created'),
    meta(content='2 February 2014',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/query.wrl',name='reference'),
    meta(content='http://www.siggraph.org/s98',name='reference'),
    meta(content='http://www.siggraph.org/s98/conference/courses/18.html',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/slides/mt0465.htm',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/vrml97.htm',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/Query.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Copyright (c) 1998, David R. Nadeau"],title='Query browser state'),
    Viewpoint(description='Entry view'),
    NavigationInfo(),
    Transform(scale=(0.75,0.75,0.75),translation=(-4.0,0.0,0.0),
      children=[
      Inline(url=["Two.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/Two.x3d","Two.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/Two.wrl"])]),
    Transform(translation=(-1.5,1.25,0.0),
      children=[
      Shape(
        geometry=Text(DEF='Message',string=[""],
          fontStyle=FontStyle(family=["TYPEWRITER"],size=0.65,style_='BOLD')))]),
    TimeSensor(DEF='Timer',cycleInterval=4.0,loop=True),
    Script(DEF='Introspect',
      field=[
      field(accessType='inputOnly',name='trigger',type='SFTime'),
      field(accessType='outputOnly',name='message',type='MFString')]),
    ROUTE(fromField='cycleTime',fromNode='Timer',toField='trigger',toNode='Introspect'),
    ROUTE(fromField='message',fromNode='Introspect',toField='set_string',toNode='Message')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Query.py")
