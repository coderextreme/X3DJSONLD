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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='SilkyExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SilkyExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky00',url=["SilkyPrototypes.x3d#Silky00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky00","SilkyPrototypes.wrl#Silky00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky01',url=["SilkyPrototypes.x3d#Silky01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky01","SilkyPrototypes.wrl#Silky01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky02',url=["SilkyPrototypes.x3d#Silky02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky02","SilkyPrototypes.wrl#Silky02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky03',url=["SilkyPrototypes.x3d#Silky03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky03","SilkyPrototypes.wrl#Silky03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky04',url=["SilkyPrototypes.x3d#Silky04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky04","SilkyPrototypes.wrl#Silky04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky05',url=["SilkyPrototypes.x3d#Silky05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky05","SilkyPrototypes.wrl#Silky05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky06',url=["SilkyPrototypes.x3d#Silky06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky06","SilkyPrototypes.wrl#Silky06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky07',url=["SilkyPrototypes.x3d#Silky07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky07","SilkyPrototypes.wrl#Silky07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky08',url=["SilkyPrototypes.x3d#Silky08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky08","SilkyPrototypes.wrl#Silky08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky09',url=["SilkyPrototypes.x3d#Silky09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky09","SilkyPrototypes.wrl#Silky09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky10',url=["SilkyPrototypes.x3d#Silky10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky10","SilkyPrototypes.wrl#Silky10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky11',url=["SilkyPrototypes.x3d#Silky11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky11","SilkyPrototypes.wrl#Silky11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky12',url=["SilkyPrototypes.x3d#Silky12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky12","SilkyPrototypes.wrl#Silky12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky13',url=["SilkyPrototypes.x3d#Silky13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky13","SilkyPrototypes.wrl#Silky13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky14',url=["SilkyPrototypes.x3d#Silky14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky14","SilkyPrototypes.wrl#Silky14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky15',url=["SilkyPrototypes.x3d#Silky15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky15","SilkyPrototypes.wrl#Silky15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky16',url=["SilkyPrototypes.x3d#Silky16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky16","SilkyPrototypes.wrl#Silky16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky17',url=["SilkyPrototypes.x3d#Silky17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky17","SilkyPrototypes.wrl#Silky17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky18',url=["SilkyPrototypes.x3d#Silky18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky18","SilkyPrototypes.wrl#Silky18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky19',url=["SilkyPrototypes.x3d#Silky19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky19","SilkyPrototypes.wrl#Silky19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky20',url=["SilkyPrototypes.x3d#Silky20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky20","SilkyPrototypes.wrl#Silky20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky21',url=["SilkyPrototypes.x3d#Silky21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky21","SilkyPrototypes.wrl#Silky21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky22',url=["SilkyPrototypes.x3d#Silky22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky22","SilkyPrototypes.wrl#Silky22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky23',url=["SilkyPrototypes.x3d#Silky23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky23","SilkyPrototypes.wrl#Silky23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky24',url=["SilkyPrototypes.x3d#Silky24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky24","SilkyPrototypes.wrl#Silky24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky25',url=["SilkyPrototypes.x3d#Silky25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky25","SilkyPrototypes.wrl#Silky25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky26',url=["SilkyPrototypes.x3d#Silky26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky26","SilkyPrototypes.wrl#Silky26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky27',url=["SilkyPrototypes.x3d#Silky27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky27","SilkyPrototypes.wrl#Silky27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky28',url=["SilkyPrototypes.x3d#Silky28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky28","SilkyPrototypes.wrl#Silky28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky29',url=["SilkyPrototypes.x3d#Silky29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky29","SilkyPrototypes.wrl#Silky29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky30',url=["SilkyPrototypes.x3d#Silky30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky30","SilkyPrototypes.wrl#Silky30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky31',url=["SilkyPrototypes.x3d#Silky31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky31","SilkyPrototypes.wrl#Silky31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky32',url=["SilkyPrototypes.x3d#Silky32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky32","SilkyPrototypes.wrl#Silky32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky33',url=["SilkyPrototypes.x3d#Silky33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky33","SilkyPrototypes.wrl#Silky33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky34',url=["SilkyPrototypes.x3d#Silky34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d#Silky34","SilkyPrototypes.wrl#Silky34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.wrl#Silky34"]),
    Group(bboxSize=(10.5,10.5,2.0),
      children=[
      NavigationInfo(headlight=False),
      Viewpoint(DEF='Front',description='Front view',position=(0.0,0.0,12.0)),
      Viewpoint(DEF='PersRight',description='Low Right',orientation=(0.74291,0.30772,0.59447,1.2171),position=(6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='PersLeft',description='Low Left',orientation=(0.74291,-0.30772,-0.59447,1.2171),position=(-6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='Back',description='Back view',orientation=(0.0,1.0,0.0,3.1416),position=(0.0,0.0,-12.0)),
      Transform(DEF='Close_travel',
        children=[
        PositionInterpolator(DEF='Close_Mover',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,2.5,0.0),(0.0,0.0,0.0),(0.0,-2.5,0.0),(0.0,0.0,0.0),(0.0,2.5,0.0)]),
        TimeSensor(DEF='Close_Time',cycleInterval=12.0,loop=True),
        Viewpoint(DEF='Close',description='Close Front',position=(0.0,0.0,6.0))]),
      DirectionalLight(direction=(1.0,-1.0,-1.0)),
      DirectionalLight(direction=(0.0,1.0,-0.5),intensity=0.5),
      Anchor(description='Back to front view',url=["#Front"],
        children=[
        Transform(translation=(0.0,0.0,-0.5),
          children=[
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='Silky00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='Silky00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky00',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["Silky00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='Silky01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='Silky01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky01',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='Silky02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='Silky02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky02',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='Silky03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='Silky03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky03',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='Silky04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='Silky04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky04',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='Silky05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='Silky05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky05',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='Silky06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='Silky06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky06',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='Silky07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='Silky07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky07',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='Silky08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='Silky08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky08',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='Silky09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='Silky09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky09',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='Silky10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='Silky10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky10',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='Silky11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='Silky11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky11',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='Silky12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='Silky12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky12',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='Silky13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='Silky13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky13',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='Silky14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='Silky14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky14',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='Silky15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='Silky15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky15',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='Silky16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='Silky16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky16',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='Silky17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='Silky17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky17',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='Silky18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='Silky18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky18',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='Silky19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='Silky19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky19',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='Silky20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='Silky20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky20',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='Silky21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='Silky21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky21',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='Silky22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='Silky22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky22',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='Silky23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='Silky23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky23',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='Silky24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='Silky24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky24',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='Silky25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='Silky25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky25',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='Silky26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='Silky26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky26',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='Silky27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='Silky27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky27',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='Silky28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='Silky28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky28',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='Silky29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='Silky29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky29',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='Silky30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='Silky30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky30',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='Silky31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='Silky31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky31',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='Silky32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='Silky32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky32',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='Silky33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='Silky33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky33',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='Silky34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='Silky34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Silky34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Silky34',parameter=["target=_source"],url=["SilkyPrototypes.html#ProtoDeclare_Silky34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.html#ProtoDeclare_Silky34"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Silky34"],
                fontStyle=FontStyle(USE='Style')))])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Close_Time',toField='set_fraction',toNode='Close_Mover'),
    ROUTE(fromField='value_changed',fromNode='Close_Mover',toField='set_translation',toNode='Close_travel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SilkyExamples.py")
