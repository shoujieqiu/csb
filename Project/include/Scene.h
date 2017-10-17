#ifndef SCENE_H
#define SCENE_H

//#include <QEvent>
#include <QResizeEvent>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>
#include <ext.hpp>
#include <glm.hpp>
#include "Shader.h"
#include "TrackballCamera.h"
#include "Mesh.h"
#include "Buffer.h"

class Scene
{
public:
  Scene();
  ~Scene();
  void mouseMove( QMouseEvent * event );
  void mouseClick( QMouseEvent * event );
  void Update();
  void Draw() const;
  void createMesh();
  void setSize( const int _width, const int _height );
  int getWidth() const { return m_width; }
  int getHeight() const { return m_height; }
  void init();

private:
  //----------------------------------------------------------------------------------------------------------------------
  TrackballCamera m_camera;
  //----------------------------------------------------------------------------------------------------------------------
  glm::mat4 m_projection;
  //----------------------------------------------------------------------------------------------------------------------
  glm::mat4 m_view;
  //----------------------------------------------------------------------------------------------------------------------
  glm::mat4 m_MV;
  //----------------------------------------------------------------------------------------------------------------------
  glm::mat4 m_MVP;
  //----------------------------------------------------------------------------------------------------------------------
  glm::mat4 m_N;
  //----------------------------------------------------------------------------------------------------------------------
  GLint m_MVPAddress;
  //----------------------------------------------------------------------------------------------------------------------
  GLint m_MVAddress;
  //----------------------------------------------------------------------------------------------------------------------
  GLint m_NAddress;
  //----------------------------------------------------------------------------------------------------------------------
  Mesh m_mesh;
  //----------------------------------------------------------------------------------------------------------------------
  Buffer m_buffer;
  //----------------------------------------------------------------------------------------------------------------------
  int m_width;
  //----------------------------------------------------------------------------------------------------------------------
  int m_height;
  //----------------------------------------------------------------------------------------------------------------------};
  Shader m_shader;
  //----------------------------------------------------------------------------------------------------------------------};
  GLuint m_vao;
  //----------------------------------------------------------------------------------------------------------------------
  GLuint m_vbo;
  //----------------------------------------------------------------------------------------------------------------------
  GLuint m_nbo;
  //----------------------------------------------------------------------------------------------------------------------
  GLint m_vertexPositionAddress;
  //----------------------------------------------------------------------------------------------------------------------
  GLint m_vertexNormalAddress;
};

#endif // SCENE_H
